# HW01 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapter 3 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW01 repository. When your code is compiled and run, the resulting program should:
* Prompt the user to enter an integer value and a type of coin (penny, pennies, nickel, nickels, dime, dimes, quarter, quarters).
* Use `cin` to read these two values from the user, storing the numeric value as a `int` called `num_coins` and the unit in a `string` called `coin_type`.
* Create `string` variables called `penny`, `pennies`, `nickel`, `nickels`, `dime`, `dimes`, `quarter`, `quarters`. Use the `{}`-list style initialization. The string value of each variable should be the same as the name of the variable.
* Create `double` variables called `penny_value`, `nickel_value`, `dime_value`, and `quarter_value` with values of `0.01`, `0.05`, `0.10`, and `0.25` respectively. Use the `{}`-list style initialization.
* Throughout the remainder of the program, you may not use the literal values `0.01`, `0.05`, `0.10`, `0.25`, `penny`, `pennies`, `nickel`, `nickels`, `dime`, `dimes`, `quarter`, and `quarters`; instead use the appropriate variables
* Create `int` variables `total_pennies`, `total_nickels`, `total_dimes`, and `total_quarters`. Use the `{}`-list style initialization to initialize each to `0`.
* Whenever the user provides a numeric value and type of coin, increment the total number of that type of coin using the appropriate variable.
* Use a while loop to continue until the user ends the program by invoking the [end-of-input character](https://en.wikipedia.org/wiki/End-of-Transmission_character) (Control+d on Linux and Mac)
* Calculate and store the total value in dollars in a `double` variable called `dollars`, using the `{}`-list style initialization.
* Print out the total number of each type of coin and the total value in dollars (as a `double`).


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a 
How many coins do you have (pennies, nickels, dimes, quarters)? 
> <b>5 quarters</b>
> <b>1 penny</b>
> <b>1 quarter</b>
> <b>15 nickels</b>
> <b>3 dimes</b>
> <b>10 pennies</b>
> 
You have 11 pennies
You have 15 nickels
You have 3 dimes
You have 6 quarters
You have a total of $2.66
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_a.cpp` located in the `part_a` subdirectory (not in the root of your HW01 git repository)
* The file `part_a.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.


### Grading rubric

If the above criteria are met, [the grading rubric for Part A](rubric.tsv) will be used to assign credit for Part A.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapter 3 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part A indicates successful demonstration of the skills listed in [the grading rubric for Part A](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

