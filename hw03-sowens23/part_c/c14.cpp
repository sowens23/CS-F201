/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : c14.cpp
Program Function : Write a complete C++ program. Initialize a vector<string> words variable containing six elements. Print out element words[0]. Print an explanation of why that particular string is printed. Print out element words[4]. Print an explanation of why that particular string is printed.

Additional Notes;

*/
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;

int main () {
	vector<string> words {"0","1","2","3","4","5","6"};
	cout <<endl;
	cout << words[0] << " : '0' is printed because when 'words[0]' is called, it prints the first value of the vector 'words' which is a string type with the value of '0'\n";
	cout << words[4] << " : '4' is printed because when 'words[4]' is called, it prints the fourth value of the vector 'words' which is a string type with the value of '4'\n";
	cout <<endl;
	return 0;
}
/**
 * 3/3
 */