# HW07 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do

* You must have a `.gitignore` file in `part_d` that ignores `part_d` and `*.o`
* You should create a file in `part_d` called `Author.h` 
   - In `Author.h`, declare a `class Author` that contains:
     - `std::string first_name;` as a private member variable
     - `char middle_initial;` as a private member variable
     - `std::string last_name;` as a private member variable
     - a public default constructor `Author();`
     - a public constructor `Author(std::string last, std::string first, char middle);`
     - a public method `std::string getFirst();`
     - a public method `std::string getLast();`
     - a public method `char getMiddle();`
* You should create a file in `part_d` called `Author.cpp`
  - In `Author.cpp`, implement the body of the `Author` class's constructors and methods:
    - the body of each constructor should initialize the first name, last name, and middle initial member variables
    - the body of each get method should return the appropriate member variable value
* You should create a file in `part_d` called `part_d.cpp`
    - In `part_d.cpp`, implement `int main() { ... }`
    - In your main function, you should 
	  - Create a `vector<Author> authors` variable
	  - Using a loop, prompt the user to enter an author's name
	  - Each time the user enters an author's name, create add that author to the vector of authors
	  - After the loop, use a for-each loop and cout to print the list of authors

* You should create a file in `part_d` called `Makefile`
  - Write your makefile so that when the user types `make` or `make part_d` at the terminal, the `part_d` program will be compiled using your `part_d.cpp` and `Author.cpp` files. When you type `make clean` all `.o` files should be removed, and when you type `make cleanest` all `.o` files and the `part_d` program should be removed.
  

### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW Github repository
* You must have the appropriately named files located in the `part_d` subdirectory (not in the root of your HW07 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



### What does it mean if I successfully complete this part of the assignament?

Part D of this assignament is designed to assess basic understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **basic understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

