/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-28

    Program Name : part_a.cpp
Program Function :

		Write a simple class called GameState that has two public member 
			variables: bool game_over and char winner
		Write a function GameState check_game_state(vector<char> game_board) 
			that takes a Tic Tac Toe gameboard and returns a GameState object as a result. 
			If there is a winner, the object's game_over member variable should be true. 
			Otherwise it should be false. If there is a winner, the identity of the winner (x or o) 
			should be stored in the winner member variable.
		The rest of the program should be the same as in Part B, but the loop should end 
			when there is a winner, and the winner should be reported.

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

class GameState {
	public:
		bool game_over {false};
		char winner {' '};
};

GameState checkwin;
vector<char> tic_tac_toe {' ',' ',' ',' ',' ',' ',' ',' ',' '};

GameState check_game_state(vector<char> game_board) {
	if (game_board[0] == game_board[1] && game_board[1] == game_board[2]) checkwin.winner = game_board[0];	
	else if (game_board[3] == game_board[4] && game_board[4] == game_board[5]) checkwin.winner = game_board[3];	
	else if (game_board[6] == game_board[7] && game_board[7] == game_board[8]) checkwin.winner = game_board[6];	
	else if (game_board[0] == game_board[3] && game_board[3] == game_board[6]) checkwin.winner = game_board[0];	
	else if (game_board[1] == game_board[4] && game_board[4] == game_board[7]) checkwin.winner = game_board[1];	
	else if (game_board[2] == game_board[5] && game_board[5] == game_board[8]) checkwin.winner = game_board[2];	
	else if (game_board[0] == game_board[4] && game_board[4] == game_board[8]) checkwin.winner = game_board[0];	
	else if (game_board[2] == game_board[4] && game_board[4] == game_board[6]) checkwin.winner = game_board[2];	
	if (checkwin.winner != ' ') checkwin.game_over = true;
	return checkwin;

}

bool checkrequest(int i) {
	bool state {true};
	if (i < 0 || i > 8) state = false;
	if (tic_tac_toe[i] == 'x' || tic_tac_toe[i] == 'o') state = false;
	return state;
}

int main () {
	int i {};
	int turn {0};
	string prompt {"\nEnter a number in the range 0-8"};
	while (checkwin.game_over == false) {
		cout << prompt;
		if (turn%2==0) cout << " (Player x): ";
		if (turn%2==1) cout << " (Player o): ";
		cin >> i;
		while (checkrequest(i) == false) {
			if (i<0||i>8) cout << "Invalid location: number must be in the range 0-8.\n";
			else if (tic_tac_toe[i]!=' ') cout << "Invalid Entry: Player " << tic_tac_toe[i] << " already played in " << i << "\n";
			cout << prompt;
			if (turn%2==0) cout << " (Player x): ";
			if (turn%2==1) cout << " (Player o): ";
			cin >> i;
		}
		if (turn%2==0) tic_tac_toe[i]='x';
		if (turn%2==1) tic_tac_toe[i]='o';
		for (int row=0;row<3;row++) {
			for (int column=0;column<3;column++) {
				cout << tic_tac_toe[(row*3)+column];
			}
			cout << endl;
		}
		checkwin = check_game_state(tic_tac_toe);
		turn += 1;
	}
	cout <<endl;
	return 0;
}
/**
 * 13/13
 */