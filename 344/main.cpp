#include <iostream>
#include <vector>
#include <string>

void reverseString(std::vector<char>& s);

int main(){
    std::vector<char> s = {'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
    reverseString(s);
    std::cout<<std::endl;

    for (int i=0; i<s.size(); i++){
        std::cout << s[i];
    }
    return 0;
}

void reverseString(std::vector<char>& s) {
    char temp;
    for(int i=(s.size()-1); i>0; i--){
        if(i< s.size()/2){
            break;
        }
        temp = s[i];
        s[i] = s[(s.size()-1)-i];
        s[(s.size()-1)-i] = temp;
    }
}