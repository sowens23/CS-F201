# HW04 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_c.cpp`. When your code is compiled and run, the resulting program should:
* Perform the same as part_d, but be aware that player x and player o alternate turns.

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_c
Please enter a number in the range 0-8 (Player x): <b>2</b>
01x
345
678
Please enter a number in the range 0-8 (Player o): <b>5</b>
01x
34o
678
Please enter a number in the range 0-8 (Player x): <b>4</b>
01x
3xo
678
Please enter a number in the range 0-8 (Player o): <b>6</b>
01x
3xo
o78
Please enter a number in the range 0-8 (Player x): 
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW04 Github repository
* You must have a file called `part_c.cpp` located in the `part_c` subdirectory (not in the root of your HW04 git repository)
* The file `part_c.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_c part_c.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.


### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess satisfactory understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **satisfactory understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

