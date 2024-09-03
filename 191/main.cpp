#include <iostream>

int hammingWeight(int n);
int main(){
    int ans = hammingWeight(128);

    std::cout<<std::endl<<ans<<std::endl;
    return 0;
}
int hammingWeight(int n){
    int out=n;
    int retval=1;
    int bit=0;

    if(n>=1073741824){
        retval = 1073741824;
    }

    else{
        while (retval <=n){
            if (retval == n){
                return 1;
            }
            retval *=2;
        }
        retval/=2;
    }

    while (out>0){
        if(out>=retval){
        out-=retval;
        bit++;
        }
        retval/=2;
    }
    return bit;

}