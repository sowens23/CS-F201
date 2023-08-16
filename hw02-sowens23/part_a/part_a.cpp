/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_d.cpp
Program Function :

• In part_a.cpp, you should define a function with the following signature:
• • string centered_line(char c, int width, char p, int padding)
• • When called, this function should return a string.
• • • The string sholud consist of sequence of characters (p) followed by a sequence of characters (c) followed by a sequence of characters (p)
• • • The values width and padding specify the width of each c and p sequence.
• In part_a.cpp, you should define a function with the following signature:
• • void print_diamond(int height)
• • When called, this function should:
• • • Verify that height is a positive integer. If it is,
• • • • Create a vector of strings called lines
• • • • Use integer arithmetic, for loops, and push_back to create one string per line such that the entire vector represents a diamond of # characters with characters as the padding
• • • • Use a for-each loop and cout to print the diamond
• When your code is compiled and run, the resulting program should:
• • Declare variables int height and string prompt using {}-style initialization
• • Use a while loop to continue until the user ends the program by invoking the end-of-input character (Control+d on Linux and Mac), each time prompting the user to a positive odd number
• • Within the while loop,
• • • Call print_diamond with the height provided by the user

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

string centered_line(char c, int width, char p, int padding) {
	string line_centered {};	
	for (int i=1; i<=padding; i++) line_centered+=p;
	for (int i=1; i<=width; i++) line_centered+=c;
	for (int i=1; i<=padding; i++) line_centered+=p;
	return line_centered;
}

void print_diamonds(int height) {
	vector<string> lines {};
	for (int i=1; i<=height; i=i+2) {
		lines.push_back(centered_line('#', i, ' ', ((height-i)/2)));
	}
	for (int i=(height-2); i>=1; i=i-2) {
		lines.push_back(centered_line('#', i, ' ', ((height-i)/2)));
	}
	for (int i=0; i<lines.size(); i++) cout << lines[i] << endl;
	return;
}

int main () {
	int height {};
	string prompt {"Enter a positive odd integer: "};	
	cout << endl << prompt;
	while (cin >> height) {
		// Extra credit for clearing the screen! Thanks :)
		cout << "\033[2J\033[1;1H";
		if (height>0 and height%2==1) print_diamonds(height);
		cout << prompt;
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */