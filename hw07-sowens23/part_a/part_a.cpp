/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Dec-4

Program Name: part_a.cpp 
Program Function:

	Your task is to restructure the calculator program in the part_a subdirectory.
	You must have a .gitignore file in part_a that ignores part_a and *.o
	You must have a Makefile that implements make run, make part_a, make clean, and make cleanest
	Copy your Author, Book, and Genre files from the other parts
	Expand the Book class to include a private Genre member variable
	Add functions to each part that allow these classes to be used directly with cout
	Create a part_a.cpp file with a main method. Your main method should prompt the user to enter one 
		book at a time. 
		The user will enter a book title and copyright date along with the book's genre and author. 
		Store the books in a vector<Book>
	After the user has finished entering books, use a for-each loop and your custom 
		<< operator functions to print out the complete information for each book

Additional Notes;

*/

#include<iostream>
#include<string>
#include<vector>
#include "Author.h"
#include "Book.h"
#include "Genre.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

/* Add a section to include Genre in this program. 
	if(from_string(genre_temp) == Genre::romance) cout << "Romance";
*/

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
