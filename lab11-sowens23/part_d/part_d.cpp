/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : part_d.cpp
Program Function : Print a representation of a blank Tic-Tac-Toe board, where each blank square is represented by a '_' character. You must use a for loop where you keep track of the row (0, 1, or 2) and a nested for loop where you keep track of the column (0, 1, 2).

Additional Notes;

*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main () {
	char blankspace {'_'};
	cout <<endl;
	for (int row=0;row<3;row++) {
		for (int column=0;column<3;column++) {
			cout <<blankspace;
		}
		cout <<endl;
	}
	cout <<endl;
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */