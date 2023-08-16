/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Oct-20

    Program Name : d07.cpp 
Program Function : Write a complete C++ program. The program should list the steps that are part of the process of taking a C++ file and creating the corresponding executable file.

Additional Notes;

*/

#include<iostream>

int main () {
	std::cout<<"\nThe following steps are what it takes to get a c++ file to executable.\n";
	std::cout<<"1. Run the following command 'g++ -std=c++17 -o file file.cpp'\n";
	std::cout<<"2. This will run your c++ written file through the following steps:\n";
	std::cout<<"  - 2a. Preproccessing; 2b. Compiles; 2c. Assembles; 2d. Linking;\n";
	std::cout<<"3. After that you should execute the freshly batched executable file. In this case it would be called 'file'. You can run with the following syntax './file'.\n";
	std::cout<<"4. That's it!\n";
	return 0;
}
/**
 * 5/5
 */