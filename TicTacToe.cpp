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

int GetPlayerChoice(){
    std::string rowInput;
    std::string colInput;
    std::cout << "NOTE: valid row and column indexes are 0-2" << std::endl;
    std::cout << "Choose a row: ";
    std::cin >> rowInput;
    std::cout << "Choose a column: ";
    std::cin >> colInput;
    int result = ((stoi(rowInput)+1) * (stoi(colInput)+1))-1;
    return result;
}

int main(){

    std::vector<char> myBoard = createBoard();
    DisplayBoard(myBoard);
    std::cout << GetPlayerChoice() << std::endl;

}
