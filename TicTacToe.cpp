#include <iostream>
#include <vector>

std::vector<char> createBoard(){
    std::vector<char> board;


    for(int i = 0; i < 9; i++){
        board.push_back('*');
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
    std::string rowInput;
    std::string colInput;
    int result;
    do{
    std::cout << "NOTE: valid row and column indexes are 0-2" << std::endl;
    std::cout << "Choose a row: ";
    std::cin >> rowInput;
    std::cout << "Choose a column: ";
    std::cin >> colInput;
    result = (3 * stoi(rowInput)) + stoi(colInput);
    }
    while(result < 0 || result > 8);
    return result;
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

    DisplayBoard(myBoard);
    int turn = 0;
    bool playerTurn = true;
    while(turn < 10){
        int choice;

        choice = GetPlayerChoice();

        myBoard = PlaceMarker(myBoard, choice, playerTurn);

        DisplayBoard(myBoard);

        turn +=1;

        playerTurn = !playerTurn;
    }
        

}  


