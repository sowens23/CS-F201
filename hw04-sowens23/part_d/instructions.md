# HW04 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_d.cpp` in the `part_d` subdirectory of your HW04 repository. When your code is compiled and run, the resulting program should:
* Construct an  `vector<char> tic_tac_toe {
   '0', '1', '2',
   '3', '4', '5',
   '6', '7', '8'
};`
* Define integer variable `int i`
* Prompt the user `"Enter a number in the range 0-8: "` 
* Use a `while` loop and `cin` to read an integer `i` from the user
* Store `'x'` at `tic_tac_toe[i]` 
* Use nested `for` loops to print the game board
* Continue prompting and reading from the user until there is no more user input

### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Enter a number in the range 0-8: <b>5</b>
012
34x
678
Enter a number in the range 0-8: <b>1</b>
0x2
34x
678
Enter a number in the range 0-8: <b>4</b>
0x2
3xx
678
Enter a number in the range 0-8:
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW Github repository
* You must have a file called `part_d.cpp` located in the `part_d` subdirectory (not in the root of your HW04 git repository)
* The file `part_d.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_d part_d.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess basic understanding of the content from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

The term **basic understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

