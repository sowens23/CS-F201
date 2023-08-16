/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-28

    Program Name : part_d.cpp
Program Function :

		Construct an vector<char> tic_tac_toe { '0', '1', '2', '3', '4', '5', '6', '7', '8' };
		Define integer variable int i
		Prompt the user "Enter a number in the range 0-8: "
		Use a while loop and cin to read an integer i from the user
		Store 'x' at tic_tac_toe[i]
		Use nested for loops to print the game board
		Continue prompting and reading from the user until there is no more user input

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
	string prompt {"Enter a number in the range 0-8: "};
	cout << endl << prompt;
	while (cin >> i) {
		tic_tac_toe[i]='x';
		for (int row=0;row<3;row++) {
			for (int column=0;column<3;column++) {
				cout << tic_tac_toe[(row*3)+column];
			}
			cout <<endl;
		}
		cout << "Enter a number in the range 0-8: ";
	}
	cout <<endl;
	return 0;
}
/**
 * 61/61
 */