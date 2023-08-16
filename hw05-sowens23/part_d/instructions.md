# HW05 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to restructure the calculator program in the `part_d` subdirectory.

* You should create a file in `part_d` called `Token.h`
   - Move the `Token` class from `calculator.cpp` into `Token.h`
   - Edit the `Token` class so that it also has a default constructor
* You should create a file in `part_d` called `TokenStream.h`
  - Move the `TokenStream` class from `calculator.cpp` into `TokenStream.h`
  - Edit the `TokenStream` class so that it also has a default constructor
* The `calculator.cpp` file must now import `Token.h` and `TokenStream.h`
* Your code must compile and run and have the same functionality as the provided `calculator.cpp`
* You must have a `.gitignore` file in `part_d` that ignores `calculator` and `*.o`


### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW Github repository
* You must have the appropriately named files located in the `part_d` subdirectory (not in the root of your HW05 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o calculator calculator.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess basic understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **basic understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

