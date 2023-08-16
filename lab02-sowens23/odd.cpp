/*
 * odd.cpp
 * Spencer Owens
 * 09/16/2022
 * Write a program called `odd.cpp` that implements question 8 from the Chapter 3 end-of-chapter exercises:
 *  - Prompt the user for an integer
 *  - Use modulo and `if` to determine whether the number is odd or even
 *  - Print a message informing the user whether their number is even or odd. The message should look like this: `The value 4 is an even number`
*/

#include<iostream>
using namespace std;

int main () {
	cout << "\nEnter a number to be read as even or odd: ";
	int even_or_odd = 0;
	cin >> even_or_odd;
	if(even_or_odd % 2 == 0){
		cout << even_or_odd << " is even.\n\n";
		return 0;
	}	
	else cout << even_or_odd << " is odd \n\n";
	return 0;
}
