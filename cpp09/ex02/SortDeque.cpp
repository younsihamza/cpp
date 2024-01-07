#include "SortDeque.hpp"
#include "PmergeMe.hpp"

SortDeque::SortDeque()
{
    
}

SortDeque::~SortDeque()
{

}

SortDeque::SortDeque(const SortDeque& main)
{
    Deque = main.Deque;
}

SortDeque&  SortDeque::operator=(const SortDeque& main)
{
    Deque = main.Deque;
    return *this;
}

 size_t SortDeque::size()
 {
    return Deque.size();
 }

void SortDeque::parseArgument(int len , char **argv)
{
    std::stringstream ss;
    double number;

    for(int i = 1 ; i < len ; i++)
        if(checkIsNumber(argv[i])== false)
            throw "argumet not valide";
    for(int i = 1; i < len ; i++)
    {
        ss << argv[i];
        ss >> number;
        if( number > std::numeric_limits<unsigned int>::max())
            throw "number too large!!";
        Deque.push_back(number);
        ss.clear();
    }
    befor = Deque;
}
void SortDeque::merge(std::deque<std::pair<int,int> >& pairNumbers , std::deque<std::pair<int,int> >&a ,std::deque<std::pair<int,int> >&b)
{
    for(size_t i = 0; i < pairNumbers.size();i++)
    {
        if(a.size() == 0)
        {
            pairNumbers[i] = b.at(0);
            b.erase(b.begin());
        }else if(b.size() == 0)
        {
            pairNumbers[i] = a.at(0);
            a.erase(a.begin());
        }else
        {
            if(b.at(0).second > a.at(0).second)
            {
                pairNumbers[i] = a.at(0);
                a.erase(a.begin());
            }else
            {
                pairNumbers[i] = b.at(0);
                b.erase(b.begin());
            }
        } 
    }
}

void SortDeque::insertToDeque(std::deque<int> &Deque , int trg)
{
    int low = 0;
    int high = Deque.size() - 1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(Deque.at(mid) < trg)
            low = mid + 1;
        else
            high = mid - 1; 
    }
    Deque.insert(Deque.begin() + low,trg);
}

void SortDeque::sortPairt(std::deque<std::pair<int,int> >& pairNumbers)
{
    size_t size = pairNumbers.size();
    if(size == 1)
        return;
    int pos; 
    std::deque<std::pair<int,int> > a;
    std::deque<std::pair<int,int> > b;
    pos = size / 2 ;
    a.insert(a.begin(),pairNumbers.begin(), pairNumbers.begin() + pos);
    b.insert(b.begin(), pairNumbers.begin() + pos,pairNumbers.end());
    sortPairt(a);
    sortPairt(b);
    merge(pairNumbers,a,b);
}

void  SortDeque::generateJacobsthalNumbers( std::deque<int>&sp, size_t size)
{
    size_t hold;
    for(size_t i = 0; i < size ; i++)
    {
        if ((hold = jacobsthalNumbers(i)) > size)
            break;
        sp.push_back(hold);
    }
}
void SortDeque::CombineBetweenIndexsAndjacobsthalNumbers(std::deque<int>& combine,size_t size)
{
    std::deque<int> jacobsthalNumbersHolder;
    std::deque <int> indexSecondValue;
    generateJacobsthalNumbers(jacobsthalNumbersHolder,size);
    for(size_t i = 0; i < size;i++)
        indexSecondValue.push_back(i);
    int currentValue; 
    size_t j = 0;
    for(size_t i = 0; i < jacobsthalNumbersHolder.size() ; i++)
    {
        currentValue = jacobsthalNumbersHolder.at(i);
        if(combine.size() && combine.back() == currentValue)
            continue;
        combine.push_back(currentValue);
        indexSecondValue[currentValue] = -1;
        for(; j < indexSecondValue.size() &&  indexSecondValue.at(j) < currentValue ; j++)
        {
            if(indexSecondValue.at(j) == -1)
                continue;
            combine.push_back(indexSecondValue.at(j));
        }
    }
    if(j < indexSecondValue.size())
        combine.insert(combine.end(),indexSecondValue.begin()+j ,indexSecondValue.end());
}

void SortDeque::MakePairsSortItSpliteIt( std::deque<int>& secondValue)
{
    std::deque<std::pair<int,int> > pairNumbers;
    for(size_t i = 0 ; i < Deque.size(); i += 2)
    {
        if(Deque.at(i) < Deque.at(i + 1))
            pairNumbers.push_back(std::make_pair(Deque.at(i), Deque.at(i+1)));
        else
            pairNumbers.push_back(std::make_pair(Deque.at(i+1), Deque.at(i)));
    }
    sortPairt(pairNumbers);
    Deque.clear();
    for(size_t i = 0; i < pairNumbers.size(); i++)
    {
        Deque.push_back(pairNumbers[i].second);
        secondValue.push_back(pairNumbers[i].first);
    }
}
void SortDeque::DequeSort()
{
    
    std::deque<int> secondValue;  
    std::deque <int> combine;
    bool _isOdd = false;
    int holdnumber;

    if(Deque.size() % 2)
        holdnumber = Deque.back(), Deque.pop_back(),_isOdd = true;
    MakePairsSortItSpliteIt(secondValue);
    CombineBetweenIndexsAndjacobsthalNumbers(combine,secondValue.size());
    for(size_t i = 0 ; i < combine.size() ; i++)
        insertToDeque(Deque,secondValue.at(combine.at(i)));
    if(_isOdd == true)
        insertToDeque(Deque,holdnumber);
}

void SortDeque::printValue()
{
    std::cout << "Befor : ";
    for(size_t i = 0 ; i < befor.size();i++)
        std::cout << befor.at(i) << " ";
    std::cout << std::endl;
    std::cout << "after : ";
    
    for(size_t i = 0; i < Deque.size() ; i++)
        std::cout << Deque.at(i) << " ";
    std::cout << std::endl;
}
