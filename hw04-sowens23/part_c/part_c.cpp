/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-28

    Program Name : part_c.cpp
Program Function :

		Perform the same as part_d, but be aware that player x and player o alternate turns.

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

int main () {
	vector<char> tic_tac_toe {'0','1','2','3','4','5','6','7','8'};
	int i {};
	int turn {0};
	string prompt {"Enter a number in the range 0-8 "};
	cout << endl << prompt << " (Player x): ";
	while (cin >> i) {
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