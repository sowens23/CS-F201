/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d04.cpp
Program Function : Write a complete C++ program. The program should print instructions that print out the complete command line used to compile a program using g++, along with a detailed explanation of what each part of the command line means.

Additional Notes;

*/

#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main () {
	cout <<"\ng++ std=c++17 -o file file.cpp\n";
	cout <<"g++ invokes the GCC command, which preprocesses, compiles, assembles and links your code.\n";
	cout <<"-std=c++17 sets the standard for c++ version.\n";
	cout <<"-o specifies in the g++ command that you would like to output the results of the g++ command into a file.\n";
	cout <<"'file' specifies the name of the file you would like output the 'g++' into.\n";
	cout <<"'file.cpp' specifies the actual file with the code you would like to compile, into a program.\n";
	return 0;
}
/**
 * 5/5
 */