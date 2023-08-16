/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : c15.cpp 
Program Function : Write a complete C++ program. Initialize a vector<string> words variable containing six elements. Use a for-each loop to print the value of each string.

Additional Notes;

*/
#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::string;
using std::vector;
using std::endl;

int main () {
	vector<string> words {"1","2","3","4","5","6"};
	cout <<endl;
	for (string q : words) cout << q << " ";
	cout <<endl;
	cout <<endl;
	return 0;
}
/**
 * 4/4
 */