/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    }
};
*/

#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val);
int main()
{
    std::vector<int> numb = {0,1,2,2,3,0,4,2};
    int returns = removeElement(numb, 2);

    for (int i=0; i<numb.size(); i++)
    {
        std::cout<<numb[i]<<std::endl;
    }
}

int removeElement(std::vector<int>& nums, int val)
{
    int retVal = 0;
    std::vector<int> solution;
    for (int i=0; i<nums.size(); i++)
    {
        if(nums[i]!=val)
        {
            solution.push_back(nums[i]);
            retVal++;
        }
    }
    nums.swap(solution);

    return retVal;
}