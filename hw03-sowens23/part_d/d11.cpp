/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d11.cpp
Program Function : Write a complete C++ program. Come up with an example of a small function. Your program must first print that function. The program should then print an explanation of each of the four parts of a function. Include what each part is called, and include an example.

Additional Notes;

*/

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

string parta() {
	string print="The first part of a function is the function type. This declares what type will be returned after running the function. Say you want to input 2 numbers '1' and '5' and return the result as a string that says 'The sum is 6', you would declare the function as a string, to return a string type.";
	return print;
}

string partb() {
	string print="The second part of a function is the function name. This is what will be used as the 'call' to use the function in other areas of your program. For example, a function the delivers a square of a integer could be called 'sqr', we would call the function by using the 'sqr' with any parameters set to call the function.";
	return print;
}

string partc() {
	string print="The third part of a function is the function parameter. This is what will be used to initialize any variables that may be used as input for the function. Consider a function that adds to numbers, the parameter of the function declares (int x, int y) then when you call the function you will need to input to int values such as add_numbers(1, 4).";
	return print;
}

string partd() {
	string print="The fourth part of the function is the body. This is where the 'meat' of the function will be. This is where the primary code of the function exists, that provides the code needed to execute the function. It will run through all the code appropriately and when it reached the end of the body, it will usually be provided with a return type and exit the function.";
	return print;
}

int main () {
	cout <<"Function 1: string parta() { string print=''The first part of a function...''; return print;}\n";
	cout <<"Function 2: string partb() { string print=''The second part of a function...''; return print;}\n";
	cout <<"Function 3: string partc() { string print=''The third part of a function...''; return print;}\n";
	cout <<"Function 4: string partd() { string print=''The fourth part of a function...''; return print;}\n";

	cout <<endl<<parta()<<endl;
	cout <<endl<<partb()<<endl;
	cout <<endl<<partc()<<endl;
	cout <<endl<<partd()<<endl;
	return 0;
}
/**
 * 5/5
 */