/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-26

    Program Name : fizz.cpp
Program Function : Using a for loop, print numbers 1-100, but for numbers divisible by three, print "fizz" instead.

Additional Notes;

*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
	for (int i=1; i<101; i++) {
		if (i%3==0) cout << "fizz" << endl;
		else cout << i << endl;
	}
	return 0;
}
/**
 * Feedback:
 * Total: 85/85
 */