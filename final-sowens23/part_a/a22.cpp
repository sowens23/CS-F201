/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: a22.cpp
	Program Function:
		Create a function called string reverse_cat(const vector<string>& words). Your function should use a for loop and string concatenation to return the words in reverse separated by underscores. Your main should read user input and then call the function and print the result.
*/

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

string reverse_cat(const vector<string> words) {
	string conc {"\""};
	for (int i=words.size();i>0;i--) {
		if (i>1) conc+=words[i-1]+"_";
		if (i==1) conc+=words[i-1]+"\"";
	}
	return conc;
}

int main () {
	vector<string> words;
	string temp;
	cout << "Please enter one word per line:\n";
	while (cin >> temp) {
		words.push_back(temp);
	}
	cout << "Your words in reverse are " << reverse_cat(words) << endl;
	return 0;
}
