#include <iostream>
#include <string>

std::string intToRoman(int num);

int main(){
    int num=1000;
    //Fun little twist
    //int num;
    // std::cout <<std::endl;
    // std::cout << "I can convert any of the numbers into Roman!"<<std::endl<< "Type whatever integer number you would Like:";
    // std::cin>> num;
    // std::cout<<std::endl<< "Here is the number!"<<std::endl;
    std::cout <<intToRoman(num)<<std::endl;

    return 0;
}

std::string intToRoman(int num){
    std::string retOut;
    int temp=0;
    while (num >0){
        if (num>=1000){
            retOut += "M";
            num-=1000;
        }
        else if (num>=500 && num<1000){
            temp = num/100;
            if(temp == 9){
                retOut += "CM";
                num-=900;
            }
            else{
                retOut += "D";
                num-=500;
            }
        }
        else if(num>=100 && num<500){
            temp= num/100;
            if (temp ==4){
                retOut += "CD";
                num -= 400;
            }
            else{
                retOut += "C";
                num-=100;
            }
        }
        else if(num>=50 && num<100){
            temp = num/10;
            if(temp == 9){
                retOut += "XC";
                num-=90;
            }
            else{
                retOut += "L";
                num-=50;
            }
        }
        else if (num>=10 && num<50){
            temp = num/10;
            if(temp==4){
                retOut += "XL";
                num-=40;
            }
            else{
            retOut += "X";
            num-=10;
            }
        }
        else if(num>=5 && num <10){
            if (num ==9){
                retOut += "IX";
                num -=9;
            }
            else{
                retOut += "V";
                num-=5;
            }
        }
        else{
            if (num==4){
                retOut +="IV";
                num -=4;
            }
            else{
            retOut += "I";
            num--;
            }
        }
    }
    return retOut;
}