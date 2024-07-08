#include <iostream>
#include <vector>

void rotate(std::vector<int>& nums, int k);

int main(){
    std::vector<int> nums ={-1,-100,3,99};
    rotate(nums,2);
    std::cout<<std::endl;
    for (int i=0; i<nums.size(); i++){
        std::cout<<nums[i]<<std::endl;
    }
    return 0;
}

void rotate(std::vector<int>& nums, int k){
    std::vector<int> solution;
    if(nums.size()<10000){
        for (int i=0; i<k; i++){
        int tempSwap = nums[nums.size()-1];
        for (int j=nums.size()-1;j>0;j--){
            nums[j] = nums[j-1];
        }
        nums[0] = tempSwap;
        }
    }
    else{
        for (int i=0;i<k;i++){
            solution.push_back(nums[nums.size()+(i-k)]);
        }
        for (int i=0; i<nums.size()-k;i++){
            solution.push_back(nums[i]);
        }
        nums.swap(solution);
    }
}