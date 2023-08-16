/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : a23.cpp 
Program Function : Write a complete C++ program that includes nested for loops. Prior to the loops, initialize an integer variable that is set to zero initially. Inside the innermost loop, increment the integer. At the end, print out the value of the variable and a detailed explanation of why it has the value that it has.

Additional Notes;

*/

#include<iostream>
using std::cout;
using std::endl;

int main () {
	int counter {0};
	for (int a=0;a<15;a++) {
		for (int b=0;b<99;b++) {
			for (int c=0;c<3;c++) {
				counter += 1;
			}
		}
	}
	cout << endl;
	cout << counter <<endl;
	cout << "In 3 nested for loops, we run 15 times into 99 times into 3 times, this is equal to 4,455.\n";
	cout << "Incrementing by one, this puts the counter equal to the amount of times the nested for loops run.\n";
	cout << "Which we concluded was 4,455. Then we print that number out to see that this is the case.\n";
	cout << endl;
	return 0;
}
/**
 * 3/3
 */