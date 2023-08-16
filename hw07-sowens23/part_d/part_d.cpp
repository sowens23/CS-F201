/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: part_d.cpp 
Program Function:

	In part_d.cpp, implement int main() { ... }
	In your main function, you should
		Create a vector<Author> authors variable
		Using a loop, prompt the user to enter an author's name
		Each time the user enters an author's name, create add that author to the vector of authors
		After the loop, use a for-each loop and cout to print the list of authors

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
#include "Author.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main () {
	vector<Author> authors = {};
	string first_temp;
	char middle_temp;
	string last_temp;
	string prompt = {"\nPlease enter an authors name (First name, middle initial, last name): "};
	cout << prompt;
	while (cin >> first_temp >> middle_temp >> last_temp) {
		Author temp = Author(last_temp, first_temp, middle_temp);
		authors.push_back(temp);
		cout << prompt;
	}
	cout << endl;
	for (Author i: authors) {
		cout << i.getFirst() << " ";
		cout << i.getMiddle() << " ";
		cout << i.getLast() << "; ";
	}
	cout << endl;
	return 0;
}
