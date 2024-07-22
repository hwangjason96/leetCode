#include <iostream>
#include <vector>

bool isValidSudoku(std::vector<std::vector<char>>& board);
bool isValid(std::vector<char> block);
int main(){
    std::vector<std::vector<char>> board = 
    {
{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}
    };

    std::cout<< isValidSudoku(board);
    return 0;
}

bool isValidSudoku(std::vector<std::vector<char>>& board){
    std::vector<char> temp;
    for (int i =0; i<9; i++){
        if (isValid(board[i])!=1){
            return false;
        }
        for (int j=0; j<9; j++){
            temp.push_back(board[j][i]);
        }
        if (isValid(temp)!=1){
            return false;
        }
        temp.clear();
    }
temp.clear();

    //Blocks C1

    for (int k=0; k<3; k++){
        for (int l=0; l<3; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    for (int k=0; k<3; k++){
        for (int l=3; l<6; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    for (int k=0; k<3; k++){
        for (int l=6; l<9; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    //Blocks C2

    for (int k=3; k<6; k++){
        for (int l=0; l<3; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();


    for (int k=3; k<6; k++){
        for (int l=3; l<6; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    for (int k=3; k<6; k++){
        for (int l=6; l<9; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    //Blocks C3

    for (int k=6; k<9; k++){
        for (int l=0; l<3; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();


    for (int k=6; k<9; k++){
        for (int l=3; l<6; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    for (int k=6; k<9; k++){
        for (int l=6; l<9; l++){
            temp.push_back(board[k][l]);
        }
    }

    if (isValid(temp)!=1){
        return false;
    }
    temp.clear();

    return true;
}

bool isValid(std::vector<char> block){
    sort(block.begin(),block.end());

    for (int i=8; i>0; i--){
        if(block[i]==block[i-1] && block[i]!='.'){
            return false;
        }
        if(block [i]=='.'){
            break;
        }
    }
    return true;
}