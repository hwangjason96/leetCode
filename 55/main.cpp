#include <iostream>
#include <vector>

bool canJump(std::vector<int>& nums);
int main(){
    std::vector<int> nums1 = {2,2,0,2,0,2,0,0,2,0};
    std::vector<int> nums2;

    std::cout << canJump(nums1);
    return 0;
}

bool canJump(std::vector<int>& nums){
    if (nums[0]==0){
        if (nums.size()>1){
        return false;
        }
        else{
            return true;
        }
    }
    for (int i=0; i<nums.size()-1; i++){
        if (nums[i] >= (nums.size()-(i+1))){
            return true;
        }
        if (nums[i]==0){
            for (int j=i-1; j>-1; j--){
                if (nums[j]> (i-j)){
                    break;
                }
                if (j==0){
                    return false;
                }
            }
        }
    }
    return true;
}



