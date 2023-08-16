/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d05.cpp 
Program Function : Write a complete C++ program. The program should print ten examples of literal values in C++, and for each literal value you should state what its type is.

Additional Notes;

*/

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::endl;
using std::string;

int main () {
	int inex=1;
	float flex=1.22;
	char chex = '?';
	string stex ="avbv";
	bool boex =true;
	cout << inex << " Integer\n";
	cout << inex-1 << " Integer\n";
	cout << flex << " Float\n";
	cout << flex+3.22 << " Float\n";
	cout << chex << " Char\n";
	chex = '!';
	cout << chex << " Char\n";
	cout << boex << " Bool\n";
	boex =false;
	cout << boex << " Bool\n";
	return 0;
}
/**
 * 5/5
 */