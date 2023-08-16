# Lab - Part A (13%)

Part A of [this lab](../README.md) provides you with an opportunity to practice basic understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function with the signature `string full_name(string first, char middle, string last)` 
  - The function should create a string called `name` that represents the full name
  - The function should return the full name
* Write a function with the signature `string reverse(string s)`
  - The function should return a string that is the same as `s` but reversed. You will need to use a `for` loop, the `size()` method on `string`, and the `s[i]` notation to access the character in string `s` at position `i`
* The `main` function should prompt for the user's name, call the two functions, then print the name, then print the name reversed

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a
Please enter your first name, middle initial, and last name: <b>Jonathan Q Doe</b>
Jonathan Q. Doe
eoD .Q nahtanoJ
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.


### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_a.cpp` located in the `part_a` subdirectory (not in the root of this git repository)
* The file `part_a.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

