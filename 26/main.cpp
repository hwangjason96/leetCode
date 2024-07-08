#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums);
void frontSort(std::vector<int>& nums);

int main ()
{
    std::vector<int> nums = {0,1,1,2,2,2,3,4,4,4,5,7,7,8,9};
    int val = removeDuplicates(nums);

    std::cout<<std::endl;
    for (int i=0; i<nums.size(); i++)
    {
        std::cout<<nums[i]<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<val;
    std::cout<<std::endl;
    return 0;
}

int removeDuplicates(std::vector<int>& nums){
    int tempSwap;
    for (int i=nums.size()-1; i>0; i--){
        if(nums[i]==nums[i-1])
        {
            if (i==nums.size()-1)
            {
                nums.pop_back();
            }
            else
            {
                tempSwap = nums[nums.size()-1];
                nums[nums.size()-1] = nums[i];
                nums[i] = tempSwap;
                nums.pop_back();
            }
        }
    }
    frontSort(nums);
    return nums.size();
}

void frontSort(std::vector<int>& nums)
{
    int minPos;
    int tempSwap;
    for (int i=0; i<nums.size()-1; i++)
    {
        minPos=i;
        for (int j=i+1; j<nums.size(); j++)
        {
            if (nums[minPos]>nums[j])
            {
                minPos = j;
            }   
        }
        if (minPos!=i)
        {
            tempSwap = nums[minPos];
            nums[minPos] = nums[i];
            nums[i] = tempSwap;
        }
    }
}