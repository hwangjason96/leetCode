#include <iostream>


double myPow(double x, int n);

int main(){

    std::cout<<std::endl<<myPow(2,-2147483648)<<std::endl;
    return 0;
}

double myPow(double x, int n) {
        double ans=1;

        if(x==1){
            return 1;
        }
        
        else if( x== -1){
            return -1;
        }

        else if(n<-2147483647){
            return 0;
        }

        if (n>0){
            for (double i=0; i<n; i++){
                ans *=x;
            }
        }
        else{
            for (double i=0; i>n; i--){
                ans /=x;
            }
        }
        return ans;
    }