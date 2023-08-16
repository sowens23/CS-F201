/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: c13.cpp
	Program Function:
		Defines the following variable: vector<string> words;
		Use cin and a while loop to
		read one string at a time from the user
		add each string to the words vector
		End the loop when the user types Ctrl-D
		After the while loop, print a message to the user, and then use a for-each loop to iterate over each item in the vector, printing its value, with a space after each word.
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	vector<string> words;
	string temp;
	cout << "Please enter a word: ";
	while (cin >> temp) {
		words.push_back(temp);
		cout << "Please enter a word: ";
	}
	cout << "\nHere are your words;\n";
	for (string i: words) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
