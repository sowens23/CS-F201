/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: a23.cpp
	Program Function:
		Declare vector<string> greetings { "Hi", "Welcome", "Hello"}; and vector<string> names { "Jack", "Jill"};. Use nested for-each loops. The outer loop should be the greetings. The inner loop should be names. Print each combination.
*/

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	vector<string> greetings {"Hi","Welcome","Hello"};
	vector<string> names {"Jack","Jill"};
	for (int a=0;a<greetings.size();a++) {
		for (int b=0;b<names.size();b++) {
			cout << greetings[a] << " " << names[b] << endl;
		}
	}
	return 0;
}
