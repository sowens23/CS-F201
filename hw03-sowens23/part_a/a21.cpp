/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-21

    Program Name : a21.cpp 
Program Function : Write a complete C++ program. Use a while loop and cin to read double values from the user, storing the results in a vector<double>. Use a for loop to print the results. Then use a for-each loop to print the results. Print an explanation of the difference between these two techniques, and a description of when it is a good idea to use one versus the other.

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	double input {};
	vector<double> input_double {};
	cout <<"\n\nPlease enter a double varible: ";
	while (cin>>input) {
		input_double.push_back(input);
		cout << "Another? :";
	}
	cout <<"\n\nFor Loop;"<<endl;
	for (int i=0;i<input_double.size();i++) cout << input_double[i] <<endl;
	cout <<"\n\nFor each loop;"<<endl;
	for (double q : input_double) cout << q << endl;
	cout << "\n\nThe difference between the two is that the for loop iterates from a counter variable initialized at 0 and incriments by 1 till it hits the value equal to the size of the vector. And using that counter variable, you pull the value out of the vector." <<endl;
	cout << "\n\nNow the for each loop, is a specialized for loop that will initialize a variable, and it will automatically iterate through the vector, and set the initialized variable to equal each value of the vector sequencially." <<endl;
	return 0;
}
/**
 * 4/4
 */