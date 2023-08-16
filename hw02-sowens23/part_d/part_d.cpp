/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_d.cpp
Program Function :  	• Construct an empty vector<int> called numbers.
			• Construct a for loop that will run four times.
			• Within the loop, prompt the user to enter a number.
			• Using a for loop, cout and cin, prompt the user to enter an integer, and then read an nteger from the user, storing the integer in an int variable called number.
			• Within the loop, use the push_back method of vector to store the two values in the numbers vector.
			• Use a for-each loop to iterate over the values in the numbers vector..

Additional Notes;

*/

#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main () {
	vector<int> variables {};	// Yali: vector<int> numbers {};
	int number;
	cout << endl;
	for (int i=0;i<4;i++) {
		cout << "Enter an integer: ";
		cin >> number;
		variables.push_back(number);
	}
	for (int i=0;i<variables.size();i++) {
		cout << variables[i] << endl;
	}
	cout << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */