#include <iostream>
#include <algorithm>
#include <vector>

int singleNumber(std::vector<int>& nums);

int main(){
    std::vector<int> nums1;

    return 0;

}

int singleNumber(std::vector<int>& nums){

    sort(nums.begin(),nums.end());

    for (int i=nums.size()-1;i>-1;i--){
        if (i==0){
            return nums[0];
        }
        if (nums[i]==nums[i-1]){
            nums.pop_back();
            nums.pop_back();
            i--;
        }
        else if (nums[i] != nums[i-1]){
            return nums[i];
        }
    }
    return 0;
} //^ (XOR)