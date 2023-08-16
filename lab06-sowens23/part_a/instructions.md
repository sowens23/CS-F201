# Lab - Part A (13%)

Part A of [this lab](../README.md) provides you with an opportunity to practice basic understanding of the contents from [Chapter 6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function called `string operator_name(char operator)` that uses a switch-case statement to check to see if the character is `+`, `-`, `*`, `/`, `%`, '(', ')', a single digit number, or something else. Return the name of the operation is associated with that character (addition, subtraction, multiplication, division, modulo, left parenthesis, right parenthesis, the number in English, or unknown operator)
* Use a while loop to prompt the user for a character, calling the function and printing the result


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a
Please enter an arithmetic operator or single digit number: <b>+</b>
addition
Please enter an arithmetic operator or single digit number: <b>7</b>
seven
Please enter an arithmetic operator or single digit number: <b>0</b>
zero
Please enter an arithmetic operator or single digit number: <b>%</b>
modulo
Please enter an arithmetic operator or single digit number: <b>(</b>
left parenthesis
Please enter an arithmetic operator or single digit number: <b>-</b>
subtraction
Please enter an arithmetic operator:
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.


### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_a.cpp` located in the `part_a` subdirectory (not in the root of this git repository)
* The file `part_a.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch06.xhtml#ch06

