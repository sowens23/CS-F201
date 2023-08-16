/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: c16.cpp
	Program Function:
		Implement a class called Song. The class should contain the following private member variables:
			string name
			string artist
			string album
			double seconds Define a public constructor with four parameters (one for each of the member variables) for Song. The constructor should initialize each of the member variables using the provided parameters. Write a complete C++ program. The program should construct a Song variable. You don't need to do anything else with the variable. (Note that all of the above code will go into c13.cpp. For this question you won't be using separate .h and .cpp files.)
*/

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Song {
private:
	string name;
	string artist;
	string album;
	double seconds;
public:
	Song (string name_, string artist_, string album_, double seconds_) {
		name = name_;
		artist = artist_;
		album = album_;
		seconds = seconds_;
	}
};

int main () {
	string nametemp;
	string artisttemp;
	string albumtemp;
	double timetemp; 
	cout << "Enter name of song: ";
	cin >> nametemp;
	cout << "Enter artist name: ";
	cin >> artisttemp;
	cout << "Enter album name: ";
	cin >> albumtemp;
	cout << "Enter length of song: ";
	cin >> timetemp;
	Song song1 = Song(nametemp, artisttemp, albumtemp, timetemp);
	return 0;
}
