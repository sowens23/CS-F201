/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-22

    Program Name : c16.cpp 
Program Function : Write a complete C++ program. Initialize a vector<double> numbers variable. Use a while to read one double at a time from the user until there is no more user input. Each double should be stored in the vector numbers. After the while loop, use a for-each loop to print each number on its own line.

Additional Notes;

*/
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main () {
	vector<double> numbers {};
	cout <<endl;
	cout << "Please enter a double type variable: ";
	double input;
	while (cin>>input) {
		numbers.push_back(input);
		cout << "Please enter a double type variable: ";
	}
	cout <<endl;
	cout <<endl;
	for (int i=0;i<numbers.size();i++) {
		cout << i+1 << ": " << numbers[i] << endl;
	}
	cout <<endl;
	return 0;
}
/**
 * 3/3
 */