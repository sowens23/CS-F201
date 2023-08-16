# Lab - Part B (13%)

Part B of [this lab](../README.md) provides you with an opportunity to practice basic understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_b.cpp` in the `part_b` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function with the signature `string full_name(string first, char middle, string last)` 
  - The function should create a string called `name` that represents the full name
  - The function should return the full name
* Write a function with the signature `string replace(string s, char c)`
  - The function should return a string that is the same length as `s` but consisting only of the character `c`
* The `main` function should prompt for the user's name, then print the name, then print the name with all characters replaced with `#`

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Please enter your first name, middle initial, and last name: <b>Jan Q Doe</b>
Jan Q. Doe
##########
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.


### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of this git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

