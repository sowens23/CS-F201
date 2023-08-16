# HW01 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapter 3 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_d.cpp` in the `part_d` subdirectory of your HW01 repository. When your code is compiled and run, the resulting program should:
* query the user for the current year, storing the result in a variable called `current_year` whose type is `int`
* query the user's first name, storing the result in a variable called `first_name` whose type is `std::string`
* query the user's middle initial, storing the result in a variable called `middle_initial` whose type is `char`
* query the user's last name, storing the result in a variable called `last_name` whose type is `std::string`
* query the user's age, storing the result in a variable called `age_in_years` whose type is `int`
* use `current_year` and `age_in_years` to calculate the year that the user was born
* print a message greeting the user by their full name and informing the user what year they were born

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Please enter the current year: <b>2022</b>
Please enter the your first name: <b>Jane</b>
Please enter the your middle initial: <b>Q</b>
Please enter the your last name: <b>Doe</b>
Please enter your age (in years): <b>20</b>
Hello, Jane Q. Doe. You were born in the year 2002.
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_d.cpp` located in the `part_d` subdirectory (not in the root of your HW01 git repository)
* The file `part_d.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_d part_d.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.


### Grading rubric

If the above criteria are met, [the grading rubric for Part D](rubric.tsv) will be used to assign credit for Part D.


### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess minimal understanding of the content from [Chapter 3 of Programming Principles and Practice using C++][textbook].

The term **minimal understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part D indicates successful demonstration of the skills listed in [the grading rubric for Part D](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

