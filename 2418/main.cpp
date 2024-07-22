#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights);
int main(){
    std::vector<std::string> names = {"Mary","John","Emma"};
    std::vector<int> heights = {180,165,170};
    std::vector<std::string> solution;
    solution = sortPeople(names, heights);

    for (int i=0; i<names.size(); i++){
        std::cout<<std::endl<< solution[i]<<std::endl;
    }
    return 0;
}

std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights){

    if (names.size()==1){
        return names;
    }

    std::vector<int> temp;
    std::vector<std::string> solution;
    temp =heights;
    sort(temp.begin(), temp.end());
    reverse(temp.begin(),temp.end());

    for (int i=0; i<temp.size(); i++){
        for (int j=0; j<heights.size(); j++){
            if (temp[i]==heights[j]){
                solution.push_back(names[j]);
            }
        }
    }
    return solution;
}