/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-5

    Program Name : part_c.cpp
Program Function : write a function that performs an output, that reads 2 inputs using a while loop.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

string perform_action(string action, string object) {
	string result {"You asked to "+action+" the "+object};
	return result;
}

int main () {
	string action {};
	string object {};
	cout << "\nProvide an action and an object: ";
	while (cin >> action >> object) {
		cout << perform_action(action, object) << endl;
		cout << "Provide an action and an object: ";
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */