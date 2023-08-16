/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: b17.cpp
	Program Function:
		Initialize a vector<string> words variable.
		Prompt the user to enter one word per line
		Using a while loop, read one string at a time until the user enters Ctl-D
		Within the while loop, append the user-provided string to the vector
		After the while loop, use a for loop to iterate over the valid indices of the vector
		Within the for loop, print out every other word (specifically, the words whose vector index is odd)
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
	vector<string> words {};
	string temp;
	cout << "Please enter a word: ";
	while (cin >> temp) {
		words.push_back(temp);
		cout << "Please enter a word: ";
	}
	for (int i=0;i<words.size();i++) {
		if ((i+1)%2==1) cout << words[i] << " ";
	}
	cout <<endl;
	return 0;
}
