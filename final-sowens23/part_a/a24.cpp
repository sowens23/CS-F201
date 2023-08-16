/* 	Name: Spencer Owens
	Class: Fall CS F201
 	Date: 2022-Dec-09
    Program Name: a24.cpp
	Program Function:
		Write a class Person
			with private member variables:
			string title
			string first_name
			string last_name
		a public constructor that takes three strings and initializes the member variables
		public functions:
			string getTitle() const { ... }
			string getFirst() const { ... }
			string getLast() const { ... } Implement ostream& operator<<(ostream& os, const Person& p) { ... } Write a main that
		reads in information about one person at a time, storing each Person in a vector
		uses a for-each loop to iterate over the Person objects, using your custom cout to print each Person (you may not use the getTitle(), getFirst(), and getLast() methods here)
*/

#include <iostream>
#include <string>
#include <vector>
#include <ostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ostream;

class Person {
private:
	string title;
	string first_name;
	string last_name;
public:
	Person (string title_t, string first_t, string last_t) {
		title = title_t;
		first_name = first_t;
		last_name = last_t;
	}
	string getTitle() const {
		return title;	
	}
	string getFirst() const {
		return first_name;	
	}
	string getLast() const {
		return last_name;	
	}
};

ostream& operator<<(ostream& os, const Person& d) {
	return os << d.getTitle() << ' ' << d.getFirst() << ' ' << d.getLast();
}
	 

int main () {
	vector<Person> people;
	string title_t;
	string first_t;
	string last_t;
	cout << "On each line, enter a person's title, first name, and last name:\n";
	while (cin >> title_t >> first_t >> last_t) {
		Person temp = Person(title_t, first_t, last_t);
		people.push_back(temp);
	}
	cout << "Your people are:\n";
	for (Person i: people) {
		cout << i << endl;
	}
	return 0;
}
