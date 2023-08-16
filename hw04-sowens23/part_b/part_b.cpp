/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-28

    Program Name : part_c.cpp
Program Function :

		Perform the same as part_c, but validate the input to ensure that the number is 
			in the range 0-8 and that no one has already played in that position.
		When you initialize the vector representing the board, initialize each value to 
			' ' instead of the character corresponding to the index of that position.
	
Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

vector<char> tic_tac_toe {' ',' ',' ',' ',' ',' ',' ',' ',' '};

bool checkrequest(int i) {
	bool state {true};
	if (i < 0 || i > 8) state = false;
	if (tic_tac_toe[i] == 'x' || tic_tac_toe[i] == 'o') state = false;
	return state;
}

int main () {
	int i {};
	int turn {0};
	string prompt {"\nEnter a number in the range 0-8 "};
	cout << endl << prompt << " (Player x): ";
	while (cin >> i) {
		while (checkrequest(i) == false) {
			if (i<0||i>8) cout << "\nInvalid location: number must be in the range 0-8.";
			else if (tic_tac_toe[i]!=' ') cout << "\nInvalid Entry: Player " << tic_tac_toe[i] << " already played in " << i;
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
		turn += 1;
		cout << prompt;
		if (turn%2==0) cout << " (Player x): ";
		if (turn%2==1) cout << " (Player o): ";
	}
	cout <<endl;
	return 0;
}
/**
 * 13/13
 */