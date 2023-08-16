/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: part_c.cpp 
Program Function:

	In your main function, you should
	Create a vector<Book> book variable
		Using a loop, prompt the user to enter a book title and the name of the author of that book
		Each time the user enters an author's name, create add that book to the vector of books
		After the loop, use a for-each loop and cout to print the list of books

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
#include "Author.h"
#include "Book.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main () {
	vector<Book> books = {};
	//Variables for Author	
	string first_temp;
	char middle_temp;
	string last_temp;
	//Variables for Book
	string title_temp;
	int copyright_temp;
	//Prompts
	string prompt1 = {"Please enter an author (First, MI, Last): "};
	string prompt2 = {"Please enter the book (Title, Copyright Year): "};
	//Meat and potatoes
	cout << endl << prompt1;
	while (cin >> first_temp >> middle_temp >> last_temp) {
		Author author_temp = Author(last_temp, first_temp, middle_temp);
		cout << prompt2;
		cin >> title_temp >> copyright_temp;
		Book book_temp = Book(title_temp, author_temp, copyright_temp);
		books.push_back(book_temp);
		cout << prompt1;
	}
	//Print for proof
	cout << "\n\n";
	for (Book i: books) {
		cout << i.getTitle() << " ";
		cout << i.getCopyright() << "; ";
	}
	cout << "\n\n";
	return 0;
}
