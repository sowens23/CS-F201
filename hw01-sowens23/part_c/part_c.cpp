/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Sep-19

    Program Name : part_c.cpp
Program Function : convert two doubles to int's then divide

Additional Notes;

*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
	double first_operand;
	double second_operand;
	cout << "\nEnter two numbers (may be real numbers or integers), separated by a space: ";
	cin >> first_operand >> second_operand;
	cout << "Using floating point division, " << first_operand << " / " << second_operand << " = " << first_operand/second_operand << endl;
	int third_operand = static_cast<int>(first_operand);
	int fourth_operand = static_cast<int>(second_operand);
	cout << "Using integer division, " << first_operand << " / " << second_operand << " = " << third_operand/fourth_operand << endl;
	cout << "Using integer division, " << first_operand << " % " << second_operand << " = " << third_operand%fourth_operand << endl << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */
