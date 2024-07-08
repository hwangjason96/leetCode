#include <iostream>
#include <vector>
#include <sstream>

int removeDuplicates(std::vector<int>& nums);
void frontSort(std::vector<int>& nums);
int main ()
{
    std::vector<int> nums = {1,1,1,1};
    int retVal = removeDuplicates(nums);

    std::cout<<std::endl;
    for (int i=0; i<nums.size(); i++)
    {
        std::cout<<nums[i]<<std::endl;
    }

    return 0;
}
int removeDuplicates(std::vector<int>& nums)
{
    int dupVal;
    int tempSwap;
    for (int i=nums.size()-1; i>0; i--)
    {
        if (nums[i]==nums[i-1] && i!=1)
        {
            if (nums.size()==2)
            {
                return nums.size();
            }
            dupVal = nums[i];
            for (int j=i-1;j>0;j--)
            {
                if (nums[j-1]==dupVal)
                {
                    tempSwap = nums[nums.size()-1];
                    nums[nums.size()-1]=nums[j-1];
                    nums[j-1]=tempSwap;
                    nums.pop_back();
                }
                else if (nums[j-1]!=dupVal)
                {
                    if(nums.size()!=2)
                    {
                        i=j;
                        break;
                    }
                    else
                    {
                        return nums.size();
                    }
                }
            }
        }
        else if (i==1)
        {
            break;
        }
    }
    frontSort(nums);
    return nums.size();
}

void frontSort(std::vector<int>& nums)
{
    int tempSwap;
    int minPos;
    for (int i=0; i<nums.size()-1; i++)
    {
        minPos=i;
        for (int j = i+1; j<nums.size(); j++)
        {
            if (nums[minPos]>nums[j])
            {
                minPos=j;
            }
        }
        if (minPos != i)
        {
            tempSwap = nums[minPos];
            nums[minPos] = nums[i];
            nums[i] = tempSwap;
        }
    }
}