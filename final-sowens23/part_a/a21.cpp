/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: a21.cpp
	Program Function:
		Use a while loop and cin to read string values from the user, storing the results in a vector<string>. Use a for loop to print the results in reverse order in the format shown below.	
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

int main () {
	vector<string> words;
	string temp;
	cout << "Please enter one word per line:\n";
	while (cin >> temp) {
		words.push_back(temp);
	}
	cout << "Your words in reverse are ";
	for (int i=words.size();i>0;i--) {
		if (i==1) cout << "and ";
		if (i>1) cout << "\"" << words[i-1] << "\", ";
		if (i==1) cout << "\"" << words[i-1] << "\" ";
	}
	cout <<endl;
	return 0;
}
