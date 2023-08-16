/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : a24.cpp 
Program Function : Write a complete C++ program. Initialize a vector of strings called words. Write a for loop in which you print the values of the vector in reverse order.

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

int main () {
	vector<string> word {"one","two","three"};
	cout <<endl;
	for (int i=word.size()-1;i>=0;i--) {
		cout << word[i] <<endl;
	}
	cout <<endl;
	return 0;
}
/**
 * 3/3
 */