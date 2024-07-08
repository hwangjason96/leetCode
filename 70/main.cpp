#include <iostream>

int climbStairs(int n);

int main(){
    std::cout<<std::endl;

    std::cout<< climbStairs(45)<<std::endl;
    return 0;
}

int climbStairs(int n){
    int m1Val=2;
    int m2Val=1;
    int temp;

    for (int i=3; i<n; i++){
        temp = m1Val;
        m1Val+=m2Val;
        m2Val= temp;
    }

    return m1Val+m2Val;

    // if (n<4){
    //     return n;
    // }
    // else{
    //     return climbStairs(n-1) + climbStairs(n-2);
    // }

}
//I don't get how a person was to see that it was fibonacci so fast.
// int climbStairs(int n){
//     int totDist=0;
//     int numTwo=0;
//     int terms=0;
//     int distTrav=0;
//     if (n<4){
//         return n;
//     }
//     for (int i=n; i>0; i--){
//         if(i%2 ==0){
//             numTwo++;
//         }
//     }
//     for (int two=numTwo; two>0; two--){
//         terms = n-two;
//         if (n==two*2){
//             totDist++;
//         }
//         else if(two==1){
//             totDist += n;
//         }
//         else{
//             distTrav = terms-two;
//             for (int one=two; one>0; one--){
//                 for (int k=distTrav; k>0; k--){
//                     totDist++;
//                 }
//             }
//             totDist++;
//         }
//     }
//     return totDist;

// }