/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d03.cpp 
Program Function : Write a complete C++ program that prompts the user for their first name and then reads the user input into a string, and then prints a message confirming the user's first name.

Additional Notes;

*/

#include<iostream>
#include<string>

int main () {
	std::cout<<"Please enter your first name: ";
	std::string first;
	std::cin>>first;
	std::cout<<first<<std::endl;
	return 0;
}
/**
 * 6/6
 */