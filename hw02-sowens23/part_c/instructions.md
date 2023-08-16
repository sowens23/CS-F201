# HW02 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_c.cpp`. When your code is compiled and run, the resulting program should:
* Construct an empty `vector<int>` called `numbers`
* Store a prompt in a `const string` called `prompt`.  Throughout the remainder of the program, you must use this instead of re-typing the prompt message.
* Prompt the user to enter two integer values
* Use a `while` loop and `cin` to read these two values from the user, storing the numeric values in  `int` variables called `first_number` and `second_number`
* Within the loop, use the `push_back` method of `vector` to store the two values in the `numbers` vector
* Each time through the `while` loop, use `if` statements to determine which number of the pair is smaller, or if the numbers are equal. Print the result.
* After the `while` loop, construct an `int` called `smallest` that is initialized using `{}` syntax with the value `INT_MAX`
* After the `while` loop, construct an `int` called `largest` that is initialized using `{}` syntax with the value `INT_MIN`
* Use a `for`-each loop to iterate over the values in the `numbers` vector, identifying the largest and smallest values in the vector
* Print messages informing the user which values were largest and smallest


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_c
Enter a pair of integers: <b>10 8</b>
8 < 10
Enter a pair of integers: <b>4 4</b>
4 == 4
Enter a pair of integers: <b>2063 -17</b>
-17 < 2063
Enter a pair of integers: <b>-1 40000</b>
-1 < 40000
Enter a pair of integers:
The smallest number was -17
The largest number was 40000
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW02 Github repository
* You must have a file called `part_c.cpp` located in the `part_c` subdirectory (not in the root of your HW01 git repository)
* The file `part_c.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_c part_c.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.


### Grading rubric

If the above criteria are met, [the grading rubric for Part C](rubric.tsv) will be used to assign credit for Part C.


### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess satisfactory understanding of the content from [Chapter 4 of Programming Principles and Practice using C++][textbook].

The term **satisfactory understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part C indicates successful demonstration of the skills listed in [the grading rubric for Part C](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

