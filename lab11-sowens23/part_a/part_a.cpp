/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : part_a.cpp
Program Function : Print a completed game of Tic-Tac-Toe board.
Extend the version from Part B so that dividers are printed between columns and between rows.

  ./part_a
  x|x|x
  - - -
  x|o|o
  - - -
  o| | 

Additional Notes;

*/

#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main () {
	cout <<endl;
	vector tic_tac_toe {
		'x','x','x',
		'x','o','o',
		'o',' ',' '
	};
	for (int row=0;row<3;++row) {
		for (int column=0;column<3;++column) {
			int count {((row*3)+column)};
			cout << tic_tac_toe[count];
			if (count==0||count==1) cout << "|";
			if (count==3||count==4) cout << "|";
			if (count==6||count==7) cout << "|";
		}
		cout <<endl;
		cout <<"- - -";
		cout <<endl;
	}
	cout <<endl;
	return 0;
}
/**
 * Feedback:
 * if-else statements: -1
 * Total: 12/13
 */