# HW01 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapter 3 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_b.cpp` in the `part_b` subdirectory of your HW01 repository. When your code is compiled and run, the resulting program should:
* Prompt the user to enter a numeric value and a unit of distance (either km for kilometers or mi for miles).
* Use `cin` to read these two values from the user, storing the numeric value as a `double` called `initial_value` and the unit in a `string` called `initial_unit`.
* Store the conversion factor `1.609` used to convert between miles and kilometers in a double called `conversion_factor` using the `{}`-list style initialization.
* Store the abbreviation  `km` in a string called `kilometers` using the `{}`-list style initialization.
* Store the abbreviation  `mi` in a string called `miles` using the `{}`-list style initialization.
* Throughout the remainder of the program, you may not use the literal values `1.609`, `"km"`, and `"mi"`; instead use the variables `conversion_factor`, `kilometers`, and `miles`
* Whenever the user provides a numeric value and unit (either km or mi), convert to the other unit and print the result, or inform the user if an unknown unit is provided
* Use a while loop to continue until the user ends the program by invoking the [end-of-input character](https://en.wikipedia.org/wiki/End-of-Transmission_character) (Control+d on Linux and Mac)


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Enter a numeric value followed by a unit abbreviation (km,mi): 
> <b>10 mi</b>
10 mi is 16.09 km
> <b>16.09 km</b>
16.09 km is 10 mi
> <b>20000 leagues</b>
Unknown unit, please try again
> <b>0.5 mi</b>
0.5 mi is 0.8045 km
>
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of your HW01 git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### Grading rubric

If the above criteria are met, [the grading rubric for Part B](rubric.tsv) will be used to assign credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapter 3 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part B indicates successful demonstration of the skills listed in [the grading rubric for Part B](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

