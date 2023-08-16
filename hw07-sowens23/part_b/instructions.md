# HW07 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should d

* You must have a `.gitignore` file in `part_b` that ignores `part_b` and `*.o`
* You must have a `Makefile` that implements `make run`, `make part_b`, `make clean`, and `make cleanest`
* You should create a file in `part_b` called `Genre.h` 
   - In `Genre.h`, declare an `enum class Genre` that declares all collection of book genres. You should have at least 5 book genres. Examples might include `fiction`, `nonfiction`, `biography`, `fantasy`, and so on. Include a Genre called `unknown`
   - In `Genre.h`, declare a function `Genre from_string(std::string s);`
* You should create a file in `part_b` called `Genre.cpp`
    - In `Genre.cpp`, implement the body of the function `Genre from_string(std::string s) { ... }` 
      - This function should return the genre as a Genre object.
      - Use `if` statements to implement this method
	  - Return `Genre::unknown` in the default case
* You should create a file in `part_b` called `part_b.cpp`
    - In `part_b.cpp`, implement `int main() { ... }`
	- Write a main method that tests your code from Genre.h and Genre.cpp

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Please enter a month as a number in the range 1-12: <b>2</b>
There are 28 days in February
Please enter a month as a number in the range 1-12: <b>9</b>
There are 30 days in September
Please enter a month as a number in the range 1-12: <b>11</b>
There are 30 days in November
Please enter a month as a number in the range 1-12: <b>0</b>
Please enter a month as a number in the range 1-12: <b>-1</b>
Please enter a month as a number in the range 1-12: <b>13</b>
Please enter a month as a number in the range 1-12: <b>1</b>
There are 31 days in January
Please enter a month as a number in the range 1-12:
Goodbye
</pre>

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW07 Github repository
* You must have the appropriately named files located in the `part_b` subdirectory (not in the root of your HW07 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

