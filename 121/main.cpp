#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices);

int main(){
    std::vector<int> prices1={1,4,2};
    std::vector<int> prices2={3,2,6,5,0,3};
    int maxOne = maxProfit(prices1);
    int maxTwo = maxProfit(prices2);

    std::cout<<std::endl<<maxOne<<std::endl;
    std::cout<<std::endl<<maxTwo<<std::endl;
    return 0;
}
int maxProfit(std::vector<int>& prices){

        int currPrice =0;
        int maxPrice =0;
        if (prices.size()==2){
            if (prices[prices.size()-1]>prices[prices.size()-2]){
                return prices[prices.size()-1]-prices[prices.size()-2];
            }
        }
        for (int i= (prices.size()-1) ; i>0; i--){
            currPrice = prices[i];
            for (int j= i-1; j>-1; j--){
                if(currPrice-prices[j]>maxPrice){
                    maxPrice = currPrice-prices[j];
                }
            }
        }
        return maxPrice;
    // int minPos=0;
    //     for (int j=0;j<prices.size();j++){
    //         if (prices[minPos]>prices[j]){
    //             minPos=j;
    //         }
    //     }
    //     int maxPos=0;
    //         for (int j=0;j<prices.size();j++){
    //             if (prices[maxPos]<prices[j]){
    //                 maxPos=j;
    //             }
    //         }
    //     if(minPos>maxPos){
    //         if(minPos==prices.size()-1){
    //             prices.pop_back();
    //             minPos=0;
    //         }
    //         maxPos=minPos;
    //         for (int i=maxPos; i<prices.size(); i++){
    //             if(prices[i]>prices[maxPos]){
    //                 maxPos=i;
    //             }
    //         }
    //         return prices[maxPos]-prices[minPos];
    //     }
    //     else{
    //         return prices[maxPos]-prices[minPos];
    //     }
    return 0;
}