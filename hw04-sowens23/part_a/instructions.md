# HW04 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW04 repository. 
* Write a simple class called `GameState` that has two public member variables: `bool game_over` and `char winner`
* Write a function `GameState check_game_state(vector<char> game_board)` that takes a Tic Tac Toe gameboard and returns a `GameState` object as a result. If there is a winner, the object's `game_over` member variable should be true. Otherwise it should be false. If there is a winner, the identity of the winner (x or o) should be stored in the winner member variable.
* The rest of the program should be the same as in Part B, but the loop should end when there is a winner, and the winner should be reported.



### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a 
Please enter a number in the range 0-8 (Player x): <b>6</b>
   
   
x  
Please enter a number in the range 0-8 (Player o): <b>4</b>
   
 o 
x  
Please enter a number in the range 0-8 (Player x): <b>2</b>
  x
 o 
x  
Please enter a number in the range 0-8 (Player o): <b>2</b>
Invalid entry: Player x already played in 2
Please enter a number in the range 0-8 (Player o): <b>-98</b>
Invalid location: number must be in the range 0-8.
Please enter a number in the range 0-8 (Player o): <b>1</b>
 ox
 o 
x  
Please enter a number in the range 0-8 (Player x): <b>8</b>
 ox
 o 
x x
Please enter a number in the range 0-8 (Player o): <b>7</b>
 ox
 o 
xox

</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW04 Github repository
* You must have a file called `part_a.cpp` located in the `part_a` subdirectory (not in the root of your HW04 git repository)
* The file `part_a.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.



### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

