/*
 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: part_b.cpp 
Program Function:
	In part_b.cpp, implement int main() { ... }
	Write a main method that tests your code from Genre.h and Genre.cpp
Additional Notes;

*/

#include <iostream>
#include <string>
#include "Genre.h"

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main () {
	string genre_temp;
	cout << "What is the genre: ";
	cin >> genre_temp;

	if(from_string(genre_temp) == Genre::romance) cout << "Romance";
	if(from_string(genre_temp) == Genre::mystery) cout << "Mystery";
	if(from_string(genre_temp) == Genre::fiction) cout << "Fiction";
	if(from_string(genre_temp) == Genre::horror) cout << "Horror";
	if(from_string(genre_temp) == Genre::nonfiction) cout << "Non-Fiction";
	if(from_string(genre_temp) == Genre::unknown) cout << "Unknown";

	return 0;
}
