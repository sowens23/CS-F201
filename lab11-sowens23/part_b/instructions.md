# Lab - Part B (13%)

Part B of [this lab](../README.md) provides you with an opportunity to write questions that assess satisfactory understanding of the contents from [Chapters 2-6 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_b.cpp` in the `part_b` subdirectory of your  repository. When your code is compiled and run, the resulting program should:
* Print a completed game of [Tic-Tac-Toe board](https://en.wikipedia.org/wiki/Tic-tac-toe).
  - Initialize a vector as follows: <pre>    
vector<char> tic_tac_toe {
'x', 'x', 'x',
'x', 'o', 'o',
'o', ' ', ' '
};</pre>
  - Use a `for` loop where you keep track of the `row` (0, 1, or 2) and a nested `for` loop where you keep track of the `column` (0, 1, 2). You must calculate the value of each printed number based on the value of the `column` and the `row`.
  - Inside the innermost `for` loop, use the `row` and `column` values to determine the index of the `vector` to be printed, and then print the appropriate value


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
xxx
xoo
o  
</pre>

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of this Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of this git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.




[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch06.xhtml#ch06

