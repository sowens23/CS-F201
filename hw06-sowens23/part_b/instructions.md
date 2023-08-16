# HW06 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do

* You must have a `.gitignore` file in `part_b` that ignores `part_b` and `*.o`
* You must have a `Makefile` that implements `make run`, `make part_b`, `make clean`, and `make cleanest`
* You should create a file in `part_b` called `Month.h` 
   - In `Month.h`, declare an `enum class Month` that declares all 12 months (see §9.5)
   - In `Month.h`, declare a function `int days_in(Month m);`
   - In `Month.h`, declare a function `std::string name_of(Month m);`
* You should create a file in `part_b` called `Month.cpp`
  - In `Month.cpp`, implement the body of the function `int days_in(Month m) { ... }` 
    - This function should return the number of days in the month. For February, always return 28.
    - Use `switch (m) { ... }` and implement the appropriate cases.
    - (see the switch-case statement in the `is_date` function at the end of Chapter 9 if you get stuck)
    - In `Month.cpp`, implement the body of the function `std::string name_of(Month m) { ... }` 
      - This function should return the name of the month as a string.
      - Use `switch (m) { ... }` and implement the appropriate cases.
      - (see the switch-case statement in the `is_date` function at the end of Chapter 9 if you get stuck)
* You should create a file in `part_b` called `part_b.cpp`
    - In `part_b.cpp`, implement `int main() { ... }`
    - In your main function, you should prompt the user to enter a number.
    - If the number is in the range 1-12, use `days_in` and `is_date` to get the number of days in the month and the name of the month, then print a message telling the user how many days are in that month
    - If the number is out of range, re-prompt the user.
    - When the user enters Ctl-D or enters a value that is not an integer, you should print `"Goodbye"`

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
* Your code must be correctly pushed to the **main** branch of your HW06 Github repository
* You must have the appropriately named files located in the `part_b` subdirectory (not in the root of your HW06 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

