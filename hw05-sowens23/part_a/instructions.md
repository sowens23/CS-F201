# HW05 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do
Your task is to restructure the calculator program in the `part_a` subdirectory.

* Begin by copying all of your `*.h` and `*.cpp` files from `part_b` into `part_a`
* Extend the functionality of the calculator so that it provides an appropriate prompt at the beginning and after it prints results.
* Extend the functionality of the calculator so that it end gracefully with a "Goodbye" message if the user enters Control-D or "q"
* Construct a `Makefile` so that allows you to:
  - compile the `calculator` by typing `make calculator`
  - properly handles all dependencies
  - allows `make clean` that removes all `*.o` files
  - allows `make cleanest` that removes all `*.o` files and `calculator`
* You must have a `.gitignore` file in `part_a` that ignores `calculator` and `*.o`


### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW05 Github repository
* You must have the appropriately named files located in the `part_a` subdirectory (not in the root of your HW05 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

