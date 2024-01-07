#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
           vectorDive(nums);
           return nums;
    }

    void vectorDive(vector<int>& nums)
    {
        int sizeEach;
        vector <int> a;
        vector <int> b;
        size_t i;
        if(nums.size() <= 1)
            return;
        sizeEach = nums.size() / 2;
        a.insert(a.begin(),nums.begin(), nums.begin()+ sizeEach);
        b.insert(b.begin(),nums.begin()+ sizeEach , nums.end());
        vectorDive(a);
        vectorDive(b);
        merge(nums , a,b);
    }
    void merge(vector<int>& nums ,vector <int>& a, vector <int>& b)
    {
        size_t sizeA =a.size();
        size_t sizeB =b.size();
        size_t IndexA =0;
        size_t IndexB =0;
        for(size_t i  = 0 ; i < nums.size() ; i++ )
        {
            if(sizeA  == IndexA)
            {
                nums.at(i) = b.at(IndexB);
                IndexB++;
            }
            else if(sizeB == IndexB) 
            {
               nums.at(i) = a.at(IndexA);
                IndexA++;
            }
            else
            {
                if(a.at(IndexA) > b.at(IndexB))
                {
                    nums.at(i) = b.at(IndexB);
                    IndexB++;
                }else 
                {
                    nums.at(i) = a.at(IndexA);
                    IndexA++;
                }
            }
        }
        
    }
};

int main()
{
    vector<int> hamza;
    hamza.push_back(4);
    hamza.push_back(8);
    hamza.push_back(410);
    hamza.push_back(9);
    hamza.push_back(74);
    hamza.push_back(9);
    Solution sorting;
    sorting.sortArray(hamza);
    for(size_t i = 0 ; i < hamza.size() ; i++)
    {
        std::cout << hamza.at(i) << std::endl;
    }
}
