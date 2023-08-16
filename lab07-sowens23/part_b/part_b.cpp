/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-5

    Program Name : part_b.cpp
Program Function : Ask for an object and action in a while loop, call a function to print 1 of 2 strings.

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

string perform_action(string action, string object) {
	vector<string> known_actions {"open door", "close mailbox"};
	string next_move {action+" "+object};
	string result {}; 
	for (int i=0; i<known_actions.size(); i++) {
		if (next_move == known_actions[i]) result = "You asked to "+action+" the "+object;
		if (i==(known_actions.size()-1) && result == "") result = "I don't know how to "+action+" the "+object;
	}
	return result;
}

int main () {
	string action {};
	string object {};
	string prompt {"Provide an action and an object: "};
	cout << endl << prompt;
	while (cin >> action >> object) {
		cout << perform_action(action, object) << endl;
		cout << prompt;
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */