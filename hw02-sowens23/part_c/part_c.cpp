/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-4

    Program Name : part_c.cpp
Program Function :  	

• Construct an empty vector<int> called numbers
• Store a prompt in a const string called prompt. Throughout the remainder of the program, you must use this instead of re-typing the prompt message.
• Prompt the user to enter two integer values
• Use a while loop and cin to read these two values from the user, storing the numeric values in int variables called first_number and second_number
• Within the loop, use the push_back method of vector to store the two values in the numbers vector
• Each time through the while loop, use if statements to determine which number of the pair is smaller, or if the numbers are equal. Print the result.
• After the while loop, construct an int called smallest that is initialized using {} syntax with the value INT_MAX
• After the while loop, construct an int called largest that is initialized using {} syntax with the value INT_MIN
• Use a for-each loop to iterate over the values in the numbers vector, identifying the largest and smallest values in the vector
• Prints message informing the user which values were largest and smallest

Additional Notes;

*/

#include<iostream>
#include<vector>
#include<climits>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::string;

int main () {
	vector<int> numbers {};	
	int first_number;
	int second_number;
	const string prompt {"Enter a pair of integers: "};
	cout << endl << prompt;
	while (cin >> first_number >> second_number) {
		numbers.push_back(first_number);
		numbers.push_back(second_number);
		if (first_number<second_number) cout << first_number << " < " << second_number << endl;
		if (first_number>second_number) cout << second_number << " < " << first_number << endl;
		if (first_number==second_number) cout << first_number << " == " << second_number << endl;
		cout << prompt;
	}
	int smallest {INT_MAX};
	int largest {INT_MIN};
	for (int i=0;i<numbers.size();i++) {
		if (numbers[i]<smallest) smallest = numbers[i];
		if (numbers[i]>largest) largest = numbers[i];
	}
	cout << "\nThe smallest number was " << smallest << endl;
	cout << "The largest number was " << largest << endl;
	cout << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */