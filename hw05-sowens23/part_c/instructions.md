# HW05 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do


Your task is to restructure the calculator program in the `part_c` subdirectory.

* Begin by copying all of your `*.h` and `*.cpp` files from `part_d` into `part_c`
* You should create a file in `part_c` called `TokenStream.cpp`
  - Move the implementation of the `Token TokenStream::get()` and `void TokenStream::putback(Token t)` into `TokenStream.cpp`
* The `calculator.cpp` file must now import `Token.h` and `TokenStream.h`
* Your code must compile and run and have the same functionality as the provided `calculator.cpp`
* You must have a `.gitignore` file in `part_c` that ignores `calculator` and `*.o`

### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW05 Github repository
* You must have the appropriately named files located in the `part_c` subdirectory (not in the root of your HW05 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o calculator calculator.cpp TokenStream.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.


### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess satisfactory understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **satisfactory understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

