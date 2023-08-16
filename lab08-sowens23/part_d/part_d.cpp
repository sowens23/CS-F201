/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-7

    Program Name : part_d.cpp
Program Function : To print out the lyrics to "The song that never end" forever.

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
	lyrics.push_back("This is a song that never ends");
	lyrics.push_back("Yes, it goes on and on, my friends");
	lyrics.push_back("Some people started singing it not knowing what it was");
	lyrics.push_back("And they'll continue singing it forever just because");
	bool isthesongdone = false;
	while (isthesongdone != true) {
		cout << lyrics[0] << endl;
		cout << "   " << lyrics[1] << endl;
		cout << "   " << lyrics[2] << endl;
		cout << "   " << lyrics[3] << endl;
	}
	return 0;
}
/**
 * Feedback:
 * Total: 61/61
 */