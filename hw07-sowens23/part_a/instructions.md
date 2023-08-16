# HW07 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do
Your task is to restructure the calculator program in the `part_a` subdirectory.

* You must have a `.gitignore` file in `part_a` that ignores `part_a` and `*.o`
* You must have a `Makefile` that implements `make run`, `make part_a`, `make clean`, and `make cleanest`
* Copy your `Author`, `Book`, and `Genre` files from the other parts
* Expand the Book class to include a private Genre member variable
* Add functions to each part that allow these classes to be used directly with cout
* Create a `part_a.cpp` file with a main method. Your main method should prompt the user to enter one book at a time. The user will enter a book title and copyright date along with the book's genre and author. Store the books in a `vector<Book>`
* After the user has finished entering books, use a for-each loop and your custom `<<` operator functions to print out the complete information for each book

### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW07 Github repository
* You must have the appropriately named files located in the `part_a` subdirectory (not in the root of your HW07 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

