/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: b20.cpp
	Program Function:
		Write an enum class ArithmeticOperator with values
			Addition
			Subtraction
			Multiplication
			Division
			Modulo
		Write a function int do_math(int first_operand, ArithmeticOperator op, int second_operand) that:
			uses a switch and case statements to perform the appropriate arithmetic operation on the provided integer operands, returning the result
		Write a complete C++ program. Prompt the user to enter an integer, an arithmetic operator, and a second integer. Use if statements to call the function do_math with the appropriate ArithmeticOperator, printing the result.
*/

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

enum class ArithmeticOperator {
	Addition=1, Subtraction, Multiplication, Division, Modulo
};

int do_math (int first_operand, ArithmeticOperator op, int second_operand) {
	int result;
	switch (op) {
		case ArithmeticOperator::Addition:result=first_operand+second_operand; break;
		case ArithmeticOperator::Subtraction:result=first_operand-second_operand; break;
		case ArithmeticOperator::Multiplication:result=first_operand*second_operand; break;
		case ArithmeticOperator::Division:result=first_operand/second_operand; break;
		case ArithmeticOperator::Modulo:result=first_operand%second_operand; break;
	}
	return result;		
}

int main () {
	int inputa;
	char inputb;
	int inputc;
	ArithmeticOperator inputb_t;
	cout << "Please enter a simple arithmetic equation with two integers: ";
	cin >> inputa >> inputb >> inputc;
	if (inputb == '+') inputb_t = ArithmeticOperator::Addition;
	if (inputb == '-') inputb_t = ArithmeticOperator::Subtraction;
	if (inputb == '*') inputb_t = ArithmeticOperator::Multiplication;
	if (inputb == '/') inputb_t = ArithmeticOperator::Division;
	if (inputb == '%') inputb_t = ArithmeticOperator::Modulo;
	cout << inputa << " " << inputb << " " << inputc << " = " << do_math(inputa, inputb_t, inputc) << "\n";
	return 0;
}
