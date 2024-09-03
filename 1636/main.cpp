#include <iostream>
#include <vector>
#include <map>

std::vector<int> frequencySort(std::vector<int>& nums);


int main(){

    std::multimap <int,int> num;
    num.insert(std::pair<int,int>(1,6));
    num.insert(std::pair<int,int>(4,4));
    num.insert(std::pair<int,int>(2,2));
    num.insert(std::pair<int,int>(1,5));

    std::cout<<num.find(1);

    return 0;
}

std::vector<int> frequencySort(std::vector<int>& nums){
    // int count=0;
    // int currCount=0;

    // for (int i=0; i<nums.size(); i++){
    //     if (i==nums.size()-1){
    //     }
    //     if (nums[i]==nums[i+1]){
    //         currCount++;
    //     }
    //     else if(nums[i]!=nums[i+1]){
    //         if (count ==0 || currCount >count ){
    //             for (int j = currCount; j<0; j--){

    //             }
    //         }
    //     }
    // }

    int count=0;
    std::multimap <int,int> num;

    for (int i=nums.size()-1; i>0; i--){
        if(nums[i]==nums[i-1]){
            count++;
        }
        else if (nums[i]!=nums[i-1]){
            num.insert(std::pair<int,int>(count,nums[i]));
            count =0;
        }
    }
    for (int i=0; i<num.size();i++){

    }
}