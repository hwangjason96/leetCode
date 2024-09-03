#include <iostream>
#include <vector>

bool isValid(std::vector<char> block);
bool isValidRow(std::vector<std::vector<char>> board, int n);
bool isValidColumn(std::vector<std::vector<char>> board, int m);
bool isValidBlock(std::vector<std::vector<char>> board, int n, int m);
bool isValidSudoku(std::vector<std::vector<char>>& board);
void solveSudoku(std::vector<std::vector<char>>& board);


int main(){

    return 0;
}
void solveSudoku(std::vector<std::vector<char>>& board){
    int n=0;
    int m=0;
    for (int i=0; i<9; i++){
        if (board[r][])
    }
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
bool isValidRow(std::vector<std::vector<char>> board, int n){
    if (n>9||n<=0){
        std::cout<<std::endl<<"invalid row number"<<std::endl;
        return false;
    }
    else{
        return isValid(board[n]);
    }
}
bool isValidColumn(std::vector<std::vector<char>> board, int m){
    std::vector<char> temp;
    if (m>9|| m<=0){
        std::cout<<std::endl<<"invalid column number"<<std::endl;
        return false;
    }
    else{
        for (int i=0; i<9; i++){
            temp.push_back(board[i][m]);
        }
    }
    return isValid(temp);
}

bool isValidBlock(std::vector<std::vector<char>> board, int n, int m){
    //n is the row number, m is the column number
    std::vector<char> temp;
    if (n>3 || m>3 || n<=0 || m<=0){
        std::cout<<std::endl<<"invalid block number"<<std::endl;
        return false;
    }
    else{
            for (int i= (n-1)*3; i<n*3; i++){
                for (int j= (m-1)*3; j<m*3; j++){
                    temp.push_back(board[i][j]);
                }
            }
            if (isValid(temp)!=1){
            return false;
        }
    }
    return true;
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

    //Blocks R1

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

    //Blocks R2

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

    //Blocks R3

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

