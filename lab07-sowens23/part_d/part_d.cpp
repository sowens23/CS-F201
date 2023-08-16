/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-5

    Program Name : part_d.cpp
Program Function : input an 'action' and an 'object', then output it.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;


int main () {
	string action {};
	string object {};
	cout << "\nProvide an action and an object: ";
	while (cin >> action >> object) {
		cout << "You asked to " << action << " the " << object << endl;
		cout << "Provide an action and an object: ";
	}
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */