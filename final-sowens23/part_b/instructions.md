# Final Exam - Part B (13%)

Part B of [this exam](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapters 2-9 of Programming Principles and Practice using C++][textbook].


## What you should do

For each part question, write a file corresponding to that name and implement the instructions. For example, for question D-01, write a file called d01.cpp


## B-17 (3%)

Write a complete C++ program. 
  * Initialize a `vector<string> words` variable.
  * Prompt the user to enter one word per line
  * Using a while loop, read one string at a time until the user enters Ctl-D
    * Within the while loop, append the user-provided string to the vector
  * After the `while` loop, use a `for` loop to iterate over the valid indices of the `vector`
    * Within the `for` loop, print out every other word (specifically, the words whose vector index is odd)

### What the result should look like:

<pre>./b17
Please enter one word per line:
<b>Once</b>
<b>upon</b>
<b>a</b>
<b>time</b>
<b>there</b>
<b>lived</b>
Here are the words with odd indices:
upon
time
lived
</pre>


## B-18 (3%)

Create a `class Measurement` containing 
  * the following `private` member variables:
    * `double value`
    * `string unit_name`
  * a `public` constructor with two parameters (one for each of the member variables) for Measurement. The constructor should initialize each of the member variables using the provided parameters.
  * a `public` method `double getValue()` that returns the `value`
  * a `public` method `string getUnit()` that return `unit_name`
Write a complete C++ program. The program should construct a Measurement variable from values read from the user. You should then use the `getValue` and `getUnit` methods to print the values.
(Note that all of the above code will go into b18.cpp. For this question you won't be using separate .h and .cpp files.)

### What the result should look like:

<pre>./b18
Please enter a measurement: <b>18.5 cm</b>
You entered a measurement with value 18.5 and unit name cm
</pre>


## B-19 (3%)

Create a function called `int smallest(vector<int>& numbers)` that returns the smallest number in the vector.
Write a complete C++ program that reads integers from the user until the user enters Ctrl-D, storing the integers in a vector. Call the function and print the result.

### What the result should look like:

<pre>./b19
Please enter one integer per line:
<b>-15</b>
<b>-5000</b>
<b>37</b>
<b>8</b>
The smallest number you entered was -5000
</pre>


## B-20 (4%)

Write an `enum class ArithmeticOperator` with values
  * `Addition`
  * `Subtraction`
  * `Multiplication`
  * `Division`
  * `Modulo`

Write a function `int do_math(int first_operand, ArithmeticOperator op, int second_operand)` that:
  * uses a `switch` and `case` statements to perform the appropriate arithmetic operation on the provided integer operands, returning the result

Write a complete C++ program. Prompt the user to enter an integer, an arithmetic operator, and a second integer. Use `if` statements to call the function `do_math` with the appropriate ArithmeticOperator, printing the result.

### What the result should look like:

<pre>./b20
Please enter a simple arithmetic expression with two integers: <b>7 + 8</b>
7 + 8 = 15
</pre>

<pre>./b20
Please enter a simple arithmetic expression with two integers: <b>7 % 2</b>
7 % 2 = 1
</pre>

[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

