/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : c13.cpp
Program Function : Write a complete C++ program. The program should initialize a double variable, and then safely convert it to an int variable. Print both values, along with an explanation of how they are different and why they are different.

Additional Notes;

*/
#include<iostream>
using std::cout;
using std::endl;

int main () {
	double x {2.3};
	int y = static_cast<double>(x);
	cout << endl;
	cout << x << " : Double.\n";
	cout << y << " : Int.\n";
	cout << "Double variable type will hold a decimal integer, when converted to an int variable type using 'static_cast' it will lose it's decimal value.\n";
	cout <<endl;
	return 0;
}
/**
 * 3/3
 */