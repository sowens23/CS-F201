/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_b.cpp
Program Function :

• In part_b.cpp, you should define a function with the following signature:
• - string centered_line(char c, int width, char p, int padding)
• - When called, this function should return a string.
• - - The string sholud consist of sequence of characters (p) followed by a sequence of characters (c) followed by a sequence of characters (p)
• - - The values width and padding specify the width of each c and p sequence.
When your code is compiled and run, the resulting program should:
• - Declare variables int width, char c, int padding, and char c, using the {}-style initialization
• - Use a while loop to continue until the user ends the program by invoking the end-of-input character (Control+d on Linux and Mac), each time prompting the user to enter four values
• - - a char c
• - - an int width
• - - a char p
• - - an int padding.
• - Within the while loop,
• - - Print a message confirming the values read
• - - Call the centered_line function with the values provided by the user, printing the result

Additional Notes;

*/

#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string centered_line(char c, int width, char p, int padding) {
	string output {};
	cout << "Printing " << width << " copies of char '" << c << "' with '" << padding << " padding using char '" << p << "'" << endl;
	for (int i=0; i<padding; i++) output += p;
	for (int i=0; i<width; i++) output += c;
	for (int i=0; i<padding; i++) output += p;
	return output;
}

int main () {
	int width {};
	char c {};
	int padding {};
	char p {};
	cout << "\nEnter a character and a width for printing, and a character and a width to use for padding before and after: " << endl;
	while (cin >> c >> width >> p >> padding) {
		cout << centered_line(c, width, p, padding) << endl;	
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */