# Lab - Part A (13%)

Part A of [this lab](../README.md) provides you with an opportunity to practice understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Write a function `string perform_action(string action, string object)`. Given an action and an object, this function should return a string confirming the user's actions. If the action is not known, return a message saying that. If the object is not known, return a message saying that. If both are know, return a message confirming the user's intent. **Do not use cout in this function**
* Use a while loop to prompt the user for an action and an object
* Within the loop, call `perform_action` and use cout to print the resulting string.


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a
Provide an action and an object: <b>open door</b>
You asked to open the door
Provide an action and an object: <b>burn door</b>
I don't know how to burn
Provide an action and an object: <b>open lockbox</b>
I don't know what a lockbox is
Provide an action and an object: <b>close mailbox</b>
You asked to close the mailbox
Provide an action and an object:
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

