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

// 0 1 2 
// 3 4 5
// 6 7 8
int GetPlayerChoice(){
    int selection;
    do {
        std::cout<<"Choose a square"<<"\n";
        std::cin>>selection;

    } while((selection < 0) || (selection > 10));
    return selection;
}

//if player is true, then it is player 1's turn
std::vector<char> PlaceMarker(std::vector<char> board, int position, bool player){
    if(player){
        board[position] = 'x';
    }
    else {
        board[position] = 'o';
    }
    return board;
}

int main(){

    std::vector<char> myBoard = createBoard();

    //DisplayBoard(myBoard);

    GetPlayerChoice();

    myBoard = PlaceMarker(myBoard, 3, true);

    DisplayBoard(myBoard);
    // for(int i = 0; i <= 9; i++){
    //     std::cout << myBoard[i];
    //     if((i+1) % 3 == 0){
    //         std::cout << '\n';
    //     }
    // }

}