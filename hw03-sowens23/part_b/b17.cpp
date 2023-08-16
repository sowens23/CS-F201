/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : b17.cpp 
Program Function : Write a complete C++ program. Create a function that can be called as follows: name("John", "Q", "Jackson") that returns the string "Jackson, John Q." for those parameters. Write a main function that calls the function with the above parameters. Initialize a called n with the results of the function call. Finally, print the value of the string n.

Additional Notes;

*/
#include<string>
#include<iostream>
using std::cout;
using std::string;
using std::endl;

string name(string first, string middle, string last) {
	string arranged {last+", "+first+" "+middle+"."};
	return arranged;
}

int main () {
	cout <<endl;
	string n = name("John","Q","Jackson");
	cout << n <<endl;
	return 0;
}
/**
 * 3/3
 */