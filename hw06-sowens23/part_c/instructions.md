# HW06 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do


* Begin by copying your `*.h` and `*.cpp` files from `part_d` into `part_c`
* You must have a `.gitignore` file in `part_c` that ignores `part_c` and `*.o`
* You must have a `Makefile` that implements `make run`, `make part_c`, `make clean`, and `make cleanest`
* In `Date.h`, add a function `bool leapYear();` in the `Date` class
* In `Date.cpp`, implement the function `bool Date::leapYear() { ... }` so that it determines whether the year is a leap year (see Lab 08 part C)
* You should create a file in `part_c` called `part_c.cpp`
  - Your main in `part_c` should function like the main in `part_d`, but whenever the user enters a date, you should report whether or not the date entered was a leap year

### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW06 Github repository
* You must have the appropriately named files located in the `part_c` subdirectory (not in the root of your HW06 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.

### What the results should look like

Successful runs of the program should look like this:
<pre>$ ./part_c
Please enter your birthday in the format YYYY MM DD: <b>1996</b> <b>3</b> <b>22</b>
1996 was a leap year.
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>17</b>
2022 is not a leap year.
Have a great day! You will be 24 years old at your next birthday!
</pre>

<pre>$ ./part_c
Please enter your birthday in the format YYYY MM DD: <b>1999</b> <b>12</b> <b>29</b>
1999 was not a leap year.
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>17</b>
2022 is not a leap year.
Have a great day! You will be 23 years old at your next birthday!
</pre>

<pre>$ ./part_c
Please enter your birthday in the format YYYY MM DD <b>1984</b> <b>11</b> <b>17</b>
1984 was a leap year.
Please enter today's date in the format YYYY MM DD <b>2022</b> <b>11</b> <b>17</b>
2022 is not a leap year.
Happy birthday! You just turned 38 years old!
</pre>

### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess satisfactory understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **satisfactory understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

