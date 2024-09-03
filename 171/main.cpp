#include <iostream>
#include <string>
#include <vector>

int titleToNumber(std::string columnTitle);

int main(){

    std::cout << std::endl << titleToNumber("ZZ") << std::endl;
    return 0;
}

int titleToNumber(std::string columnTitle){

    char input = 0;
    int output=0;
    int stor=1;
    for (int i=0; i<columnTitle.size()-1; i++){
        stor *=26;
    }

    for (int i=0; i<columnTitle.size(); i++){
        for (int j=0; j<26; j++){
            if (columnTitle[i]==input + 65 +j){
                output += stor*(j+1);
                stor /= 26;
                break;
            }
        }
    }

    return output;

}