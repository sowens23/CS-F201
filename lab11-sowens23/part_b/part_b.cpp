/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : part_b.cpp
Program Function : Use a for loop where you keep track of the row (0, 1, or 2) and a nested for loop where you keep track of the column (0, 1, 2). You must calculate the value of each printed number based on the value of the column and the row.
Inside the innermost for loop, use the row and column values to determine the index of the vector to be printed, and then print the appropriate value

Print a completed game of Tic-Tac-Toe board.
Initialize a vector as follows:


vector tic_tac_toe {
'x', 'x', 'x',
'x', 'o', 'o',
'o', ' ', ' '
};

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
			cout << tic_tac_toe[((row*3)+column)];
		}
		cout <<endl;
	}
	cout <<endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */