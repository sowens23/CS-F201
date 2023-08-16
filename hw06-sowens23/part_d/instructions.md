# HW06 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

### What you should do

* You must have a `.gitignore` file in `part_d` that ignores `part_d` and `*.o`
* You should create a file in `part_d` called `Date.h` 
   - In `Date.h`, declare a `class Date` that contains:
     - `int year;` as a private member variable
     - `int month;` as a private member variable
     - `int day;` as a private member variable
     - a public default constructor `Date();`
     - a public constructor `Date(int y, int m, int d);`
     - a public method `int getYear();`
     - a public method `int getMonth();`
     - a public method `int getDay();`
* You should create a file in `part_d` called `Date.cpp`
  - In `Date.cpp`, implement the body of the `Date` class's constructors and methods:
    - the body of the default constructor should initialize the year, month, and day to January 1, 2001
    - the body of the other constructor should initialize the year, month, and day using the provided parameters
    - the body of `getYear()` should return the year
    - the body of `getMonth()` should return the month
    - the body of `getDay()` should return the day
* You should create a file in `part_d` called `part_d.cpp`
    - In `part_d.cpp`, implement `int main() { ... }`
    - In your main function, you should 
      - create variables `int year;`, `int month;`, and `int day;`
      - prompt the user to enter their birthday as a year, a month, and a day as numbers, reading those integers into the appropriate variables 
      - construct a `Date` object called `birthday` with the provided values
      - prompt the user to enter today's date as a year, a month, and a day as numbers, reading those integers into the appropriate variables 
      - construct a `Date` object called `today` with the provided values
      - compare the two dates using the `getYear()`, `getMonth()`, and `getDay()` methods
      - if today is the user's birthday, print a celebratory message with the user's age
      - otherwise, tell them how old they will be at their next birthday
* You should create a file in `part_d` called `Makefile`
  - Write your makefile so that when the user types `make` or `make part_d` at the terminal, the `part_d` program will be compiled using your `part_d.cpp` and `Date.cpp` files. When you type `make clean` all `.o` files should be removed, and when you type `make cleanest` all `.o` files and the `part_d` program should be removed.
  

### What the results should look like

Successful runs of the program should look like this:
<pre>$ ./part_d
Please enter your birthday in the format YYYY MM DD: <b>1996</b> <b>3</b> <b>22</b>
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>17</b>
Have a great day! You will be 24 years old at your next birthday!
</pre>

<pre>$ ./part_d
Please enter your birthday in the format YYYY MM DD: <b>1999</b> <b>12</b> <b>29</b>
Please enter today's date in the format YYYY MM DD: <b>2022</b> <b>11</b> <b>17</b>
Have a great day! You will be 23 years old at your next birthday!
</pre>

<pre>$ ./part_d
Please enter your birthday in the format YYYY MM DD <b>1984</b> <b>11</b> <b>17</b>
Please enter today's date in the format YYYY MM DD <b>2022</b> <b>11</b> <b>17</b>
Happy birthday! You just turned 38 years old!
</pre>


### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW Github repository
* You must have the appropriately named files located in the `part_d` subdirectory (not in the root of your HW06 git repository)
* Your code must cleanly compile on `aurora` with no errors or warnings with the command: `make`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess basic understanding of the content from [Chapters 8-9 of Programming Principles and Practice using C++][textbook].

The term **basic understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

