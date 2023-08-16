/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : a22.cpp 
Program Function : Write a complete C++ program. Create a function called string cat(vector<string> words). Your function should use a for loop and string concatenation to return the words separated by spaces. Run the function multiple times in main with various vectors of words. At least one of your vectors must be only strings that look like integers ("1", "-15", etc).

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

string cat(vector<string> words) {
	string bigword {};
	for (string a : words) bigword+=a+" ";
	return bigword;
}

int main () {
	vector<string> word1 {"?","!","c"};
	vector<string> word2 {"apple","pear","peach"};
	vector<string> word3 {"1","-15","etc"};
	cout << "\n";
	cout << cat(word1) << endl;
	cout << cat(word2) << endl;
	cout << cat(word3) << endl;
	cout << "\n";
	return 0;
}
/**
 * 3/3
 */