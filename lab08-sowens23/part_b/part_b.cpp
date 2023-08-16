/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-7

    Program Name : part_b.cpp
Program Function : To print the lyrics to 99 bottles of beer on the wall

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main () {
	vector<string> lyrics {" bottles of beer on the wall, "," bottles of beer. Take one down, pass it around, "," bottles of beer on the wall"};
	int bottles {99};
	string pause {};
	cout << endl;
	for (int i=bottles; i>=0; i--) {
		if (i>0) cout << i << lyrics[0] << i << lyrics[1] << i-1 << lyrics[2] << endl;
	}
	cout << endl;
	return 0;
}
/**
 * Feedback:
 * Total: 13/13
 */