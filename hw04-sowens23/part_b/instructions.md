# HW04 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_b.cpp` in the `part_b` subdirectory of your HW02 repository. 
* Perform the same as part_c, but validate the input to ensure that the number is in the range 0-8 and that no one has already played in that position.
* When you initialize the vector representing the board, initialize each value to `' '` instead of the character corresponding to the index of that position.


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Please enter a number in the range 0-8 (Player x): <b>-5<b>
Invalid location: number must be in the range 0-8.
Please enter a number in the range 0-8 (Player x): <b>0</b>
x  
   
   
Please enter a number in the range 0-8 (Player o): <b>4</b>
x  
 o 
   
Please enter a number in the range 0-8 (Player x): <b>4</b>
Invalid entry: Player o already played in 4
Please enter a number in the range 0-8 (Player x): <b>9</b>
Invalid location: number must be in the range 0-8.
Please enter a number in the range 0-8 (Player x): <b>8</b>
x  
 o 
  x
Please enter a number in the range 0-8 (Player o):
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW04 Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of your HW04 git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

