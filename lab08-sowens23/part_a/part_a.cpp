/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-7

    Program Name : part_a.cpp
Program Function : Print the lyrics to "The song that never ends" with a capital letter for the first of the lyric initially, but then lowercasing aferwards.

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
	vector<string> lyrics {};
	lyrics.push_back("this is a song that never ends. ");
	lyrics.push_back("Yes, it goes on and on, my friends. ");
	lyrics.push_back("Some people started singing it not knowing what it was, ");
	lyrics.push_back("and they'll continue singing it forever just because ");
	bool isitover = false;
	cout << endl << "This is a song that never ends. ";
	while (isitover == false) {
		cout << lyrics[1] << lyrics [2] << lyrics [3] << lyrics[0];
	}
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */