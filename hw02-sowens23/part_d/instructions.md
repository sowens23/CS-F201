# HW02 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_d.cpp` in the `part_d` subdirectory of your HW02 repository. When your code is compiled and run, the resulting program should:
* Construct an empty `vector<int>` called `numbers`
* Construct a for loop that will run **four** times.
* Within the loop, prompt the user to enter a number
* Using a `for` loop, `cout` and `cin`, prompt the user to enter an integer, and then read an integer from the user, storing the integer in an  `int` variable called `number`
* Within the loop, use the `push_back` method of `vector` to store the two values in the `numbers` vector
* Use a `for`-each loop to iterate over the values in the `numbers` vector


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Enter an integer: <b>80</b>
Enter an integer: <b>-7</b>
Enter an integer: <b>0</b>
Enter an integer: <b>43</b>
80
-7
0
43
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW02 Github repository
* You must have a file called `part_c.cpp` located in the `part_c` subdirectory (not in the root of your HW01 git repository)
* The file `part_c.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_c part_c.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.


### Grading rubric

If the above criteria are met, [the grading rubric for Part D](rubric.tsv) will be used to assign credit for Part D.


### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess basic understanding of the content from [Chapter 4 of Programming Principles and Practice using C++][textbook].

The term **basic understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part D indicates successful demonstration of the skills listed in [the grading rubric for Part D](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

