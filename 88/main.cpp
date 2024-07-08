#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
void backSort(std::vector<int>& nums);
void frontSort(std::vector<int>& nums);
void flushBackZero (std::vector<int>& nums, int size);

int main ()
{
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    merge(nums1,3,nums2,3);
    std::cout<<std::endl;
    for (int i =0 ; i<nums1.size(); i++)
    {
        std::cout<<nums1[i];
        std::cout<<std::endl;
    }
    return 0;
}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
{
        std::vector<int> sortedArray;
        //Selection Sort Set up.

        if(nums1.empty() ==false ||nums2.empty() ==false)
        {
            if(nums1.empty()==false)
            {
                flushBackZero(nums1,m);
                if (nums1.empty()==false)
                {
                    backSort(nums1);
                }
            }

            if(nums2.empty() ==false)
            {
                flushBackZero(nums2,n);
                if (nums2.empty()==false)
                {
                    backSort(nums2);
                }
            }
        }

        for (int i =0; i<nums1.size(); i++)
        {
            sortedArray.push_back(nums1[i]);
        }

        for (int i =0; i<nums2.size(); i++)
        {
            sortedArray.push_back(nums2[i]);
        }
        frontSort(sortedArray);
        flushBackZero(sortedArray,sortedArray.size());
        nums1.swap(sortedArray);
}


void backSort(std::vector<int>& nums)
{
    int maxPos =0;
    int tempSwap;

    for (int i=0; i<nums.size()-1; i++)
    {
        maxPos =i;
        for (int j=i+1; j<nums.size(); j++)
        {
            if(nums[maxPos]<nums[j])
            {
                maxPos = j;
            }
        }
        if (maxPos != i)
        {
            tempSwap = nums[i];
            nums[i] = nums[maxPos];
            nums[maxPos] = tempSwap;
        }
    }
}

void frontSort(std::vector<int>& nums)
{
    int minPos =0;
    int tempSwap;

    for (int i=0; i<nums.size()-1; i++)
    {
        minPos =i;
        for (int j=i+1; j<nums.size(); j++)
        {
            if(nums[minPos]>nums[j])
            {
                minPos = j;
            }
        }
        if (minPos != i)
        {
            tempSwap = nums[i];
            nums[i] = nums[minPos];
            nums[minPos] = tempSwap;
        }
    }   
}
void flushBackZero (std::vector<int>& nums, int size)
{
    if(nums.size()!=1)
    {
        for (int i = nums.size()-1;i>size-1;i--)
        {
            if (nums[i] ==0)
            {
                nums.pop_back();
            }
            else
            {
                return;
            }
        }
    }
    if(nums.size() ==1 && nums[0]==0)
    {
        nums.pop_back();
    }

}
