/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-5

    Program Name : part_d.cpp
Program Function :

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
	vector<string> known_actions {"open", "close"};
	vector<string> known_objects {"door", "mailbox"};
	string next_move {action+" the "+object};
	int move_known {0};
	string result {}; 
	for (int i=0; i<known_actions.size(); i++) {
		if (known_actions[i] == action) move_known+=1;
	}
	for (int i=0; i<known_objects.size(); i++) {
		if (known_objects[i] == object) move_known+=2;
	}
	if (move_known == 0) result = "I don't know how to "+action+", or what a "+object+" is";
	else if (move_known == 1) result = "I don't know what a "+object+" is";
	else if (move_known == 2) result = "I don't know how to "+action;
	else if (move_known == 3) result = "You asked to "+next_move;
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
 * git log contains multiple versions of this file with descriptive log entries that were committed as the file was developed: -0.25
 * Total: 12.75/13
 */