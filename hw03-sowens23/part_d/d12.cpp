/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d12.cpp
Program Function : Write a complete C++ program. Print a description of what C++ types may be used in a switch statement.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::endl;
using std::string;
using std::cout;
using std::cin;

string switch1() { string text="A switch statement can 'switch' with an integer value.\n"; return text; }
string switch2() { string text="A switch statement can also 'switch' with a character value.\n"; return text; }

int main () {
	for (int i=0;i<2;i++) {
		switch (i) {
			case 0:
				cout<<switch1();
				break;
			case 1:
				cout<<switch2();
				break;
			default:
				cout <<"oops\n";
				break;
		}
	}
	return 0;
}
/**
 * 5/5
 */