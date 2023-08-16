/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d08.cpp
Program Function : Write a complete C++ program. The program should create 10 int variables. Two should be initialized using +, two using -, two using *, two using /, two using %, and five using more than one of these operators. For each variable, print out the result and an explanation (at least one full sentence) of why the result is what it is.

Additional Notes;

*/

#include<iostream>
using std::cout;

int main () {
	int one=1+2;
	cout <<one<<" : 1+2 ; The result is 3, because 1+2 is three.\n";
	int two=1+2-3;
	cout <<two<<" : 1+2-3 : The result is 0, because 1+2-3 is zero;.\n";
	int three=1-2;
	cout <<three<<" : 1-2 : The result is -1, because 1-2 is negative one.\n";
	int four=1-2*3;
	cout <<four<<" : 1-2*3 : The result is -5, because for some reason it simultaneously completes the operations (1-2) which equals -1 and (2*3) which equals 5, then multiplies both of those results to equal -5. I could be wrong, this seems strange to me, if this is not the case, please leave a note for me here.\n";
	int five=1*2;
	cout <<five<<" : 1*2 : The result is 2, because 1*2 is 2.\n";
	int six=1*2/3;
	cout <<six<<" : 1*2/3 : The result is 0, because 1*2 = 2 for reasons stated above, and the divided by three leaves a remainer which the integer type drops, so in turn you get 0.66 minus decimal values which is 0.\n";
	int seven=1/2;
	cout <<seven<<" : 1/2 : The result is 0, because 1/2 = .5 and integers cannot hold decimal values so it drops the decimal to equal 0.\n";
	int eight=1/2%3;
	cout <<eight<<" : 1/2%3 : The result is 0, because 1/2 = 0 for reason stated above, then when modulo'ed with 3, it has a remainder of 0 because 0/3 = 0.\n";
	int nine=1%2;
	cout <<nine<<" : 1%2 : The result is 1, because 1%2, or the remainder left over when dividing 1 by by 2 is 1.\n";
	int ten=1%2+3;
	cout <<ten<<" : 1%2+3 : The result is 4, because 1%2 = 1 for reason stated above, then plus 3 = 4..\n";
	return 0;
}
/**
 * 5/5
 */