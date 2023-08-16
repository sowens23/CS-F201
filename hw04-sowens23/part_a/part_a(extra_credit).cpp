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
int ai_difficulty {1};

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
	if (checkwin.winner != ' ') cout << "\nPlayer " << checkwin.winner << " wins!\n";
	return checkwin;

}

bool checkrequest(int i) {
	bool state {true};
	if (i < 0 || i > 9) state = false;
	if (tic_tac_toe[i] == 'x' || tic_tac_toe[i] == 'o') state = false;
	return state;
}

int ai_takeover() {
	int ai_move {-1};
	if (ai_difficulty == 1) {
		for (int i=0;i<8;++i) {
			if (tic_tac_toe[i] == ' ') ai_move = i;
			if (ai_move >= 0) i=8;
		}
	}
	if (ai_difficulty == 2) {
		int count {0};
		for (int i=0;i<9;++i) if (tic_tac_toe[i] == ' ') count += 1;
		if (count == 0) return 4;
		 else if (count == 1 && tic_tac_toe[0] == ' ') return 0;
		 else if (count == 1 && tic_tac_toe[2] == ' ') return 2;
		 else if (count == 1 && tic_tac_toe[6] == ' ') return 6;
		 else if (count == 1 && tic_tac_toe[8] == ' ') return 8;
		else if ((count == 2 || count == 3) && tic_tac_toe[0] == tic_tac_toe[1]) ai_move=2;	
		 else if (tic_tac_toe[1] == tic_tac_toe[2]) ai_move=0;	
		else if (tic_tac_toe[3] == tic_tac_toe[4]) ai_move=;	
		 else if (tic_tac_toe[4] == tic_tac_toe[5]) ai_move=;	
		else if (tic_tac_toe[6] == tic_tac_toe[7]) ai_move=;	
		 else if (tic_tac_toe[7] == tic_tac_toe[8]) ai_move=;	
	}
	return ai_move;
}

int main () {
	int i {};
	int turn {0};
	string prompt {"\nEnter a number in the range 0-8 or 9 "};
	cout << "\033[2J\033[1;1H";
	cout << "Welcome to Tic_Tac_Toe" <<endl;
	cout << "To select AI difficulty, enter 99" <<endl;
	cout << "To allow the AI a turn, enter 9\n" << endl;
	while (checkwin.game_over == false) {
		cout << prompt;
		if (turn%2==0) cout << " (Player x): ";
		if (turn%2==1) cout << " (Player o): ";
		cin >> i;
		if (i=99) {
			cout << "select difficulty 1-2 (easy to difficult): ";
			while (i<1&&i>2) {
				cout << "Failed request" <<endl;
				cout << "select difficulty 1-2 (easy to difficult): ";
				cin >> i;
			}
			ai_difficulty = i;
		}
		cout << prompt;
		if (turn%2==0) cout << " (Player x): ";
		if (turn%2==1) cout << " (Player o): ";
		cin >> i;
		while (checkrequest(i) == false) {
			if (i<0||i>9) cout << "Invalid location: number must be in the range 0-8 or 9.\n";
			else if (tic_tac_toe[i]!=' ') cout << "Invalid Entry: Player " << tic_tac_toe[i] << " already played in " << i << "\n";
			cout << prompt;
			if (turn%2==0) cout << " (Player x): ";
			if (turn%2==1) cout << " (Player o): ";
			cin >> i;
		}
		if (i==9) i = ai_takeover();
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
