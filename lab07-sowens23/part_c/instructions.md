# Lab - Part C (13%)

Part C of [this lab](../README.md) provides you with an opportunity to practice understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_c.cpp` in the `part_c` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function `string perform_action(string action, string object)`. Given an action and an object, this function should return a string confirming the user's actions. **Do not use cout in this function**
* Use a while loop to prompt the user for an action and an object
* Within the loop, call `perform_action` and use cout to print the resulting string.


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_c
Provide an action and an object: <b>open door</b>
You asked to open the door
Provide an action and an object: <b>close door</b>
You asked to close the door
Provide an action and an object: <b>drop mike</b>
You asked to drop the mike
Provide an action and an object:
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.


### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_c.cpp` located in the `part_c` subdirectory (not in the root of this git repository)
* The file `part_c.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_c part_c.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch06.xhtml#ch06

