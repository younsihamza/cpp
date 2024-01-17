#include "SortVector.hpp"
#include "PmergeMe.hpp"
#include <limits>

SortVector::SortVector()
{
    
}

SortVector::~SortVector()
{

}

SortVector::SortVector(const SortVector& main)
{
    vector = main.vector;
}

SortVector&  SortVector::operator=(const SortVector& main)
{
    vector = main.vector;
    befor = main.befor;
    return *this;
}

 size_t SortVector::size()
 {
    return vector.size();
 }

void SortVector::parseArgument(int len , char **argv)
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
        vector.push_back(number);
        ss.clear();
    }
    befor = vector;
}
void SortVector::merge(std::vector<std::pair<int,int> >& pairNumbers , std::vector<std::pair<int,int> >&a ,std::vector<std::pair<int,int> >&b)
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

void SortVector::insertToVector(std::vector<int> &vector , int trg)
{
    int low = 0;
    int high = vector.size() - 1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(vector.at(mid) < trg)
            low = mid + 1;
        else
            high = mid - 1; 
    }

    vector.insert(vector.begin() + low , trg);
    

}

void SortVector::sortPairt(std::vector<std::pair<int,int> >& pairNumbers)
{
    size_t size = pairNumbers.size();
    if(size == 1)
        return;
    int pos; 
    std::vector<std::pair<int,int> > a;
    std::vector<std::pair<int,int> > b;
    pos = size / 2 ;
    a.insert(a.begin(),pairNumbers.begin(), pairNumbers.begin() + pos);
    b.insert(b.begin(), pairNumbers.begin() + pos,pairNumbers.end());
    sortPairt(a);
    sortPairt(b);
    merge(pairNumbers,a,b);
}

void  SortVector::generateJacobsthalNumbers( std::vector<int>&sp, size_t size)
{
    size_t hold;
    for(size_t i = 0; i < size ; i++)
    {
        if ((hold = jacobsthalNumbers(i)) >= size)
            break;
        sp.push_back(hold);
    }
}
void SortVector::CombineBetweenIndexsAndjacobsthalNumbers(std::vector<int>& combine,size_t size)
{
    std::vector<int> jacobsthalNumbersHolder;
    std::vector <int> indexSecondValue;
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

void SortVector::MakePairsSortItSpliteIt( std::vector<int>& secondValue)
{
    std::vector<std::pair<int,int> > pairNumbers;
    for(size_t i = 0 ; i < vector.size(); i += 2)
    {
        if(vector.at(i) < vector.at(i + 1))
            pairNumbers.push_back(std::make_pair(vector.at(i), vector.at(i+1)));
        else
            pairNumbers.push_back(std::make_pair(vector.at(i+1), vector.at(i)));
    }
    sortPairt(pairNumbers);
    vector.clear();
    for(size_t i = 0; i < pairNumbers.size(); i++)
    {
        vector.push_back(pairNumbers[i].second);
        secondValue.push_back(pairNumbers[i].first);
    }
}
void SortVector::vectorSort()
{
    
    std::vector<int> secondValue;  
    std::vector <int> combine;
    bool _isOdd = false;
    int holdnumber;

    if(vector.size() % 2)
        holdnumber = vector.back(), vector.pop_back(),_isOdd = true;
    MakePairsSortItSpliteIt(secondValue);
    CombineBetweenIndexsAndjacobsthalNumbers(combine,secondValue.size());
    for(size_t i = 0 ; i < combine.size() ; i++)
        insertToVector(vector,secondValue.at(combine.at(i)));
    if(_isOdd == true)
        insertToVector(vector,holdnumber);
}

void SortVector::printValue()
{
    std::cout << "Befor : ";
    for(size_t i = 0 ; i < befor.size();i++)
        std::cout << befor.at(i) << " ";
    std::cout << std::endl;
    std::cout << "after : ";
    
    for(size_t i = 0; i < vector.size() ; i++)
        std::cout << vector.at(i) << " ";
    std::cout << std::endl;
}
