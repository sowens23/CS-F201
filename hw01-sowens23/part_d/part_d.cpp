/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep

    Program Name : part_d.cpp
Program Function : To read user inputs and display them out in a final sentence.

Additional Notes;

*/

#include<iostream>
using std::cin;
using std::cout;
using std::string;

int main () {
	int current_year;
	string first_name;
	char middle_initial;
	string last_name;
	int age_in_years;
	cout << "\nPlease enter the current year: ";
	cin >> current_year;
	cout << "Please enter your first name: ";
	cin >> first_name;
	cout << "Please enter your middle initial: ";
	cin >> middle_initial;
	cout << "Please enter your last name: ";
	cin >> last_name;
	cout << "Please enter your age: ";
	cin >> age_in_years;
	cout << "Hello, " << first_name << " " << middle_initial << ". " << last_name;
	cout << ". You were born in the year " << current_year - age_in_years << ".\n\n";	
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */
