/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-19

    Program Name : part_b.cpp
Program Function : Takes a double value of 'km's or 'mi' and converts it to the other.

Additional Notes;

*/

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main () {
	double initial_value;
	string initial_unit;
	double conversion_factor {1.609};
	string kilometers {"km"};
	string miles {"mi"};
	cout << "\nEnter a numberic value followed by a unit abbreviation (km,mi): ";
	while (cin >> initial_value >> initial_unit) {				// Yali: use one while loop and then wrap only if-else statements inside.
		//cin >> initial_value >> initial_unit;
		while (initial_unit != kilometers and initial_unit != miles or initial_value < 0) {
			cout << "Unknown unit, please try again" << endl;
			cin >> initial_value >> initial_unit;						// Yali: no need to cin again here.
		}
		cout << initial_value << " " << initial_unit << " is ";
		if (initial_unit == kilometers) cout << initial_value / conversion_factor << " " << miles << endl;
		else if (initial_unit == miles) cout << initial_value * conversion_factor << " " << kilometers << endl;
	}
	cout << endl;
	return 0;
}
/**
 * Feedback:
 * Uses while loop to continue reading input until end-of-input character is received from user: -1
 * Uses if, else if, and else appropriately: -1
 * Total: 11/13
 */
