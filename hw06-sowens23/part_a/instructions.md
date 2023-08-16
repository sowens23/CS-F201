# HW06 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do
Your task is to restructure the calculator program in the `part_a` subdirectory.

* You must have a `.gitignore` file in `part_a` that ignores `part_a` and `*.o`
* You must have a `Makefile` that implements `make run`, `make part_a`, `make clean`, and `make cleanest`
* Copy your `Date.h`, `Date.cpp`, `Month.h`, and `Month.cpp` files from `part_b` and `part_c` into `part_a`
* Modify `Date.h` so that the `int month;` member variable is now `Month month;`
* Modify `Date.h` and `Date.cpp` so that the return type of `getMonth()` is `Month` instead of `int`
* Create `part_a.cpp`. It should have essentially the same functionality as `part_c.cpp`, but should also report the user's next birthday with the month name as a string if the user's birthday is not today. You must use the functionality from `Month.h` to get the month as a string.

### What the results should look like

A successful run of the program should look like this:

<pre>$ ./part_a
Please enter your birthday in the format YYYY MM DD: <b>2002</b> <b>11</b> <b>18</b>
2002 was not a leap year.
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>18</b>
2022 is not a leap year.
Happy birthday! You just turned 20 years old!
</pre>

<pre>$ ./part_a
Please enter your birthday in the format YYYY MM DD: <b>2004</b> <b>12</b> <b>04</b>
2004 was a leap year.
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>18</b>
2022 is not a leap year.
Have a great day! You will be 18 years old at your next birthday!
Your next birthday will be December 4, 2022
</pre>

### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW06 Github repository
* You must have the appropriately named files located in the `part_a` subdirectory (not in the root of your HW06 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

