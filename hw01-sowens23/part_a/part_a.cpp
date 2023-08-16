/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-19

    Program Name : part_a.cpp
Program Function : To total an amount of coins from user input, and output total amount of coins stored, as well as total value. 

Additional Notes;

*/

#include<iostream>
using std::cin;
using std::string;
using std::cout;
using std::endl;

int main () {
	
	int num_coins;
	string coin_type;
	string penny {"penny"};
	string pennies {"pennies"};
	double penny_value {0.01};
	int total_pennies {0};
	string nickle {"nickle"};
	string nickles {"nickles"};
	double nickle_value {0.05};
	int total_nickles {0};
	string dime {"dime"};
	string dimes {"dimes"};
	double dime_value {0.10};
	int total_dimes {0};
	string quarter {"quarter"};
	string quarters {"quarters"};
	double quarter_value {0.25};
	int total_quarters {0};
	double dollars {0};
	cout << "\nHow many coins do you have (pennies, nickles, dimes, quarters)?" << endl;
	while (cin >> num_coins >> coin_type) {
		if (coin_type == penny or coin_type == pennies) total_pennies += num_coins; 
		else if (coin_type == nickle or coin_type == nickles) total_nickles += num_coins; 
		else if (coin_type == dime or coin_type == dimes) total_dimes += num_coins; 
		else if (coin_type == quarter or coin_type == quarters) total_quarters += num_coins; 	
	}
	// Yali: use if-else statements to determine the unit for outputs here (single/plural forms of coin numbers).
	cout << "You have " << total_pennies << " " << pennies << endl;
	dollars += total_pennies * penny_value;
	cout << "You have " << total_nickles << " " << nickles << endl;
	dollars += total_nickles * nickle_value;
	cout << "You have " << total_dimes << " " << dimes << endl;
	dollars += total_dimes * dime_value;
	cout << "You have " << total_quarters << " " << quarters << endl;
	dollars += total_quarters * quarter_value;
	cout << "You have a total of $" << dollars << endl <<endl; 
	return 0;
}
/**
 * Feedback:
 * Uses if, else if, and else appropriately: -1
 * Total: 12/13
 */
