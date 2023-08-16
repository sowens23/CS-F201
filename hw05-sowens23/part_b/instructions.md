# HW05 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to restructure the calculator program in the `part_b` subdirectory.

* Begin by copying all of your `*.h` and `*.cpp` files from `part_c` into `part_b`
* You should create files `part_b` called `Interpreter.h` and `Interpreter.cpp`
  - Create a class in `Interepreter.h` called `Interpreter`
  - Move the following declarations into the `Interpreter` class in `Interpreter.h`:
     * `TokenStream ts;`
     * `double expression();`
     * `double term();`
     * `double primary();`
* Move the definitions of the above functions to `Interpreter.cpp` as:
  - `double Interpreter::expression()`
  - `double Interpreter::term()`
  - `double Interpreter::primary()`
  * Your code must compile and run and have the same functionality as the provided `calculator.cpp`
* You must have a `.gitignore` file in `part_b` that ignores `calculator` and `*.o`

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW05 Github repository
* You must have the appropriately named files located in the `part_b` subdirectory (not in the root of your HW05 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o calculator calculator.cpp TokenStream.cpp Interpreter.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

