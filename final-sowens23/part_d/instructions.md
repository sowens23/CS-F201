# Final Exam - Part D (61%)

Part D of [this exam](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 2-9 of Programming Principles and Practice using C++][textbook].

## What you should do

For each question, write a file corresponding to that name and implement the instructions. For example, for question D-01, write a file called d01.cpp


## D-01 (5%)

Write the minimal C++ program. The program should **not** contain any #*include* or *using* statements. The code should successfully compile and run with no errors and no warnings.

### What the result should look like:

<pre>./d01
</pre>


## D-02 (5%)

Write a minimal `Hello world` program in C++. When run, the code should simply print out the message `Hello world` followed by a newline.

### What the result should look like:

<pre>./d02
Hello world
</pre>


## D-03 (5%)

Write a complete C++ program. The program should include a `for` loop that runs exactly 8 times, printing out the value of the `for` loop variable (from 1 up to 8) as it runs.

<pre>./d03
1
2
3
4
5
6
7
8
</pre>


## D-04 (5%)

Write a complete C++ program that prompts the user for their favorite color  and then reads the user input into a `string`, and then prints a message telling the user what their the user's favorite color is, followed by a newline.

### What the result should look like:

<pre>./d04
Please enter your favorite color: <b>green</b>
Your favorite color is green
</pre>


## D-05 (5%)


Write a function called `string big_or_small(int x)` that returns `"big"` if `x` is greater than `50`, `"small"` if `x` is less than `10`, and `"neither"` otherwise. Write a complete C++ program that prompts the user for an integer, calls your function, and prints the result of the function.

### What the result should look like:

<pre>./d05
Please enter an integer: <b>51</b>
big
</pre>

<pre>./d05
Please enter an integer: <b>3</b>
small
</pre>

<pre>./d05
Please enter an integer: <b>22</b>
neither
</pre>



## D-06 (5%)

Write a complete C++ program that does the following:
  * prompts the user for two integers
  * uses an `if` statment, an `else if` statment, and an `else` statement to determine whether the first number is greater than, equal to, or less than the second number, and prints a message that displays the two numbers and their relationship

### What the result should look like:

<pre>./d06
Please enter two integers: <b>4</b> <b>0</b>
4 > 0
</pre>

<pre>./d06
Please enter two integers: <b>-5</b> <b>7</b>
-5 < 7
</pre>

<pre>./d06
Please enter two integers: <b>13</b> <b>13</b>
13 = 13
</pre>


## D-07 (5%)

Write a complete C++ program that does the following:
  * Prompts the user for a positive integer
  * Uses a for loop to iterate over each number from 1 up to and including the provided integer
  * If the integer is not positive, don't print anything
  * You must use a `for` loop. You must not use any `if` statements.
  
### What the result should look like:

<pre>./d07
Please enter a positive integer: <b>5</b>
1
2
3
4
5
</pre>

<pre>./d07
Please enter a positive integer: <b>-2</b>
</pre>

<pre>./d07
Please enter a positive integer: <b>0</b>
</pre>

<pre>./d07
Please enter a positive integer: <b>1</b>
1
</pre>


## D-08 (5%)

Write a complete C++ program that does the following:
  * Uses the following variable: `vector<string> animals {"moose", "caribou", "salmon", "fox"};`
  * Uses a for-each loop to iterate over each item in the vector, printing its value.
  * You *may not* use a `for` loop
  
### What the result should look like:

<pre>./d08
moose
caribou
salmon
fox
</pre>



## D-09 (5%)

Write a complete C++ program that does the following:
  * Initialize a variable `int x{0};`
  * Implement a `while` loop. The condition of the `while` loop should check to see if `x` is less than 100.
  * Within the `while` loop, prompt the user for an integer.
  * Add the user-provided integer to the value of `x`
  * After the loop, print the final value of `x`

### What the result should look like:
  
<pre>./d09
Please enter an integer: <b>7</b>
Please enter an integer: <b>83</b>
Please enter an integer: <b>27</b>
The sum of your numbers is 117.
</pre>


## D-10 (5%)

Write a complete C++ program that does the following:
  * Initialize a variable `vector<int> numbers;`
  * Write a `while` loop. The condition of the `while` loop should check to see if the number of elements in `numbers` is less than 4.
  * Within the `while` loop, prompt the user for an integer.
  * Append the user-provided integer to `numbers`
  * After the loop, determine many numbers are in the `numbers` vector and tell the user.

### What the result should look like:
  
<pre>./d10
Please enter an integer: <b>-15</b>
Please enter an integer: <b>-5000</b>
Please enter an integer: <b>37</b>
Please enter an integer: <b>8</b>
You entered 4 integers.
</pre>


## D-11 (5%)

Write a complete C++ program that does the following:
  * Use `cin` and a `while` loop to read one string at a time from the user
  * After each string is entered, confirm the string to the user
  * End the loop when the user types Ctrl-D

### What the result should look like:
  
<pre>./d11
Please enter a string: <b>banana</b>
You entered the string banana
Please enter a string: <b>peppermint</b>
You entered the string peppermint
Please enter a string: <b>airplane</b>
You entered the string airplane
Please enter a string:
</pre>


## D-12 (6%)

Implement the following function:
  * `string salutation(string title, string first_name, string last_name) { ... }`
  * The function should concatenate the three arguments with spaces, and return the resulting string
  * Write a complete C++ program that prompts the user to enter a salutation, first name, and last name, then calls the function to obtain a result, and prints the result

### What the result should look like:
  
<pre>./d12
Please enter your title, first name, and last name: <b>Mx.</b> <b>Aleks</b> <b>River</b>
Hello, Mx. Aleks River
</pre> 

<pre>./d12
Please enter your title, first name, and last name: <b>Dr.</b> <b>Sam</b> <b>Beckett</b>
Hello, Dr. Sam Beckett
</pre> 

<pre>./d12
Please enter your title, first name, and last name: <b>Captain</b> <b>Michael</b> <b>Burnham</b>
Hello, Captain Michael Burnham
</pre> 


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

