#include <iostream>
#include <vector>

std::vector<char> createBoard(){
    std::vector<char> board;


    for(int i = 0; i < 9; i++){
        board.push_back('*');
    }
    return board;
}

void DisplayBoard(std::vector<char> myBoard){
    int counter = 0;
    for(int i = 0; i <= 9; i++){
        std::cout << myBoard[i];
        counter++;
        if(counter == 3){
            counter = 0;
            std::cout << '\n';
        }
    }
}

int main(){

    std::vector<char> myBoard = createBoard();
    DisplayBoard(myBoard);
    

}