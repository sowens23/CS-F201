/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : part_c.cpp 
Program Function : Print the 3 by 3 grid of numbers shown below. Use a for loop where you keep track of the row (0, 1, or 2) and a nested for loop where you keep track of the column (0, 1, 2). You must calculate the value of each printed number based on the value of the column and the row.

Additional Notes;

*/

#include<iostream>
using std::cout;
using std::endl;

int main () {
	cout <<endl;
	for (int row=0;row<3;++row) {
		for (int column=0;column<3;++column) {
			cout << ((row*3))+column;
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