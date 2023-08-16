# Lab - Part D (61%)

Part D of [this lab](../README.md) provides you with an opportunity to practice basic understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_d.cpp` in the `part_d` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function with the signature `string full_name(string first, string last)` that returns a string consisting of the first name and last name separated by a space
* Within `main`, prompt the user for their first and last names, then print the result of calling `full_name`


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Please enter your first and last names: <b>John Doe</b>
John Doe
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.


### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_d.cpp` located in the `part_d` subdirectory (not in the root of this git repository)
* The file `part_d.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_d part_d.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

