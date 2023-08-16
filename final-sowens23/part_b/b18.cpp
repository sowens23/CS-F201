/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: b18.cpp
	Program Function:
		Create a class Measurement containing
			the following private member variables:
			double value
			string unit_name
			a public constructor with two parameters (one for each of the member variables) for Measurement. The constructor should initialize each of the member variables using the provided parameters.
			a public method double getValue() that returns the value
			a public method string getUnit() that return unit_name Write a complete C++ program. The program should construct a Measurement variable from values read from the user. You should then use the getValue and getUnit methods to print the values. (Note that all of the above code will go into b18.cpp. For this question you won't be using separate .h and .cpp files.)
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Measurement {
private:
	double value;
	string unit_name;
public:
	Measurement (double value_, string unit_name_) {
		value = value_;
		unit_name = unit_name_;
	}
	double getValue() {
		double temp_v = value;
		return temp_v;
	}
	string getName() {
		string temp_n = unit_name;
		return temp_n;
	}
};

int main () {
	vector<Measurement> measurements;
	double value;
	string unit_name;
	cout << "Please enter a unit_name, and it's value: ";
	while (cin >> unit_name >> value) {
		Measurement temp = Measurement(value, unit_name);
		measurements.push_back(temp);
		cout << "Please enter another unit_name, and it's value: ";
	}
	cout << endl;
	for (Measurement i: measurements) {
		cout << i.getName() << " " << i.getValue() << endl;
	}
	return 0;
}







