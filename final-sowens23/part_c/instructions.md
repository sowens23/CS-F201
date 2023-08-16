# Final Exam - Part C (13%)

Part C of [this exam](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-9 of Programming Principles and Practice using C++][textbook].

## What you should do

For each part question, write a file corresponding to that name and implement the instructions. For example, for question C-13, write a file called c13.cpp


## C-13 (3%)

Write a complete C++ program that does the following:
  * Defines the following variable: `vector<string> words;`
  * Use `cin` and a `while` loop to 
    * read one string at a time from the user
    * add each string to the `words` vector
    * End the loop when the user types Ctrl-D
  * After the `while` loop, print a message to the user, and then use a for-each loop to iterate over each item in the vector, printing its value, with a space after each word.

### What the result should look like:
  
<pre>./c13
Please enter one word per line (enter Ctrl-D when done):
<b>Once</b>
<b>upon</b>
<b>a</b>
<b>time</b>
<b>there</b>
<b>lived</b>
You entered:
Once upon a time there lived 
</pre>


## C-14 (3%)

Correct all errors in c14.cpp so that the program compiles and runs correctly.

### What the result should look like:

<pre>./c14
Printing all grades:
75
81
66
90
92
87
0
</pre>


## C-15 (3%)

Write a complete C++ program that does the following:
  * prompts the user for an initial integer
  * Use a loop `while (true)`. Within the loop:
    * prompt the user to enter another integer
    * uses an `if` statment, an `else if` statment, and an `else` statement to determine whether the new integer is greater than, equal to, or less than the initial integer, and prints a message that displays the two numbers and their relationship
    * exits the loop once the user has entered a number that equals the initial integer
  * after the loop, print a goodbye message

### What the result should look like:

<pre>./c15
Please enter an initial integer: <b>9</b> 
Please enter another integer: <b>4</b>
4 < 9
Please enter another integer: <b>10</b>
10 > 9
Please enter another integer: <b>400</b>
400 > 9
Please enter another integer: <b>9</b>
9 = 9
Goodbye
</pre>


## C-16 (4%)

Implement a class called Song. The class should contain the following `private` member variables:
  * `string name`
  * `string artist`
  * `string album`
  * `double seconds`
Define a `public` constructor with four parameters (one for each of the member variables) for Song. The constructor should initialize each of the member variables using the provided parameters.
Write a complete C++ program. The program should construct a Song variable. You don't need to do anything else with the variable.
(Note that all of the above code will go into c13.cpp. For this question you won't be using separate .h and .cpp files.)

<pre>./c16
</pre>


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml
