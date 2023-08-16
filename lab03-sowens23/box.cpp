/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-21

    Program Name : box.cpp
Program Function : Using a for loop, creates a box out of *. Takes in user input for length and width.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main () {
	int length=0;
	int height=0;
	cout << "\nPlease enter a height: ";
	cin >> height;
	cout << "Please enter a length: ";
	cin >> length;
	for (int h=0; h<height; h++) {
		for (int l=0; l<length; l++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
