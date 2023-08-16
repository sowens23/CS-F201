/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-21

    Program Name : alternate.cpp
Program Function : Creates a box using * and # characters alternating between the two characters to a length and height based on user input.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main () {
	int length;
	int height;
	cout << "\nPlease enter a length: ";
	cin >> length;
	cout << "Please enter a height: ";
	cin >> height;
	cout << endl;
	for (int h=0; h<height; h++) {
		for (int l=0; l<length; l++) {
			if ((h+l)%2==0) cout << "#";
			if ((h+l)%2==1) cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
