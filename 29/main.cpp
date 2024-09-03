#include <iostream>

int divide(int dividend, int divisor);
int boundary(int quotient);
int main(){
    int solution = divide(-2147483648,-1);

    std::cout<<solution;

    return 0;
}

int divide(int dividend, int divisor){
    int solution=0;

    if (dividend>0 && divisor>0){
        int tempEnd = dividend;
        while (tempEnd>0){
            tempEnd-=divisor;
            solution++;
        }
        if (tempEnd<0){
            solution--;
        }
    }
    else if (dividend>0 && divisor<0){
        int tempEnd = dividend;
        while (tempEnd>0){
            tempEnd +=divisor;
            solution--;
        }
        if (tempEnd<0){
            solution++;
        }
    }
    else if (dividend<0 && divisor>0){
        int tempEnd = dividend;
        while (tempEnd<0){
            tempEnd +=divisor;
            solution--;
        }
        if (tempEnd>0){
            solution++;
        }
    }
    else if(dividend<0 && divisor<0){
        int tempEnd = dividend;
        while (tempEnd<0){
            tempEnd-=divisor;
            solution++;
        }
        if (tempEnd>0){
            solution--;
        }
    }
    return solution;
}

int boundary(int quotient){
    if (quotient > 2147483647 || quotient< -2147483648){
        return quotient;
    }
}