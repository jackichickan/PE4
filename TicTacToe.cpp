#include <iostream>
#include <vector>

std::vector<char> createBoard(){
    std::vector<char> board;


    for(int i = 0; i < 9; i++){
        board.push_back('0');
    }
    return board;
}

void DisplayBoard(std::vector<char> board){
    for(int i = 0; i <= 9; i++){
        std::cout << board[i] << "|";
        if((i+1) % 3 == 0){
            std::cout << '\n';
            std::cout << "------ \n";
            
        }
    }
}

int main(){

    std::vector<char> myBoard = createBoard();

    DisplayBoard(myBoard);

    // for(int i = 0; i <= 9; i++){
    //     std::cout << myBoard[i];
    //     if((i+1) % 3 == 0){
    //         std::cout << '\n';
    //     }
    // }

}