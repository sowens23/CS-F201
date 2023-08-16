/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d06.cpp 
Program Function : Write a complete C++ program. The program should print out the C++ literal types that we are using in this course, along with a description of what type of data each type stores, and a 2-3 sentence description of when it should be used.

Additional Notes;

*/

#include<iostream>
#include<string>

using std::cout;

int main () {
	cout <<"Integer: Should be used to store basic whole number values between.\n";
	cout <<"   - Integers are used to store a numberic literal usually by actual number values without a remainer. IE a whole number. Integers are used to control basic loops, for counting mechanics and to do simple mathmatics.\n";
	cout <<"Float: Should be used to store number value up to six places.\n";
	cout <<"   - Float values are used to store numeric values that have fractional values that require decimal values such as a tenth, hundreth or thousandth. This would be used to calculate simplified roots, carry remainers of more simple arithmetic or to round results to the nearest tenth.\n"; 
	cout <<"Character: Should be used to store single special character values like '?' or '!'.\n";
	cout <<"   - Character values are used to characters, used to execute command line type instructions during program operation. Character type variables can be used to operate switch case statements as well.\n"; 
	cout <<"String: Should be used to store a sequence of characters, usually to display text.\n";
	cout <<"   - String types as quickly explained above can store a sequence of characters, this can be used to print out a prompt of text more quickly than manually typing it out. It can be used to store values such as names, or addresses, etc.\n";
	cout <<"Boolean: Should be used to store True or False values, usually represented by a binary value 0, or 1.\n";
	cout <<"   - Boolean values are used to store binary statements. Think of a lightswitch, where it's either ON or OFF. This is the purpose of a boolean. To simply state a binary value.\n";
	return 0;
}
/**
 * 5/5
 */