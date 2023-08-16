# Final Exam - Part A (13%)

Part A of [this exam](../README.md) provides you with an opportunity to demonstrate a comprehensive understanding of the contents from [Chapters 2-9 of Programming Principles and Practice using C++][textbook].


## What you should do

For each part question, write a file corresponding to that name and implement the instructions. For example, for question A-21, write a file called a21.cpp


## A-21 (3%)

Write a complete C++ program. Use a `while` loop and `cin` to read `string` values from the user, storing the results in a `vector<string>`. Use a `for` loop to print the results in reverse order in the format shown below.

### What the result should look like:

<pre>./a21
Please enter one word per line:
<b>hello</b>
<b>there</b>
<b>my</b>
<b>name</b>
Your words in reverse are "name", "my", "there", and "hello"
</pre>


## A-22 (3%)

Write a complete C++ program. Create a function called `string reverse_cat(const vector<string>& words)`. Your function should use a `for` loop and string concatenation to return the words in reverse separated by underscores. Your main should read user input and then call the function and print the result.

### What the result should look like:

<pre>./a22
Please enter one word per line:
<b>hello</b>
<b>there</b>
<b>my</b>
<b>name</b>
Your words in reverse are "name_my_there_hello"
</pre>


## A-23 (3%)

Write a complete C++ program. Declare `vector<string> greetings { "Hi", "Welcome", "Hello"};` and `vector<string> names { "Jack", "Jill"};`. Use nested for-each loops. The outer loop should be the greetings. The inner loop should be names. Print each combination.


### What the result should look like:
<pre>./a23
Hi Jack
Hi Jill
Welcome Jack
Welcome Jill
Hello Jack
Hello Jill
</pre>


## A-24 (4%)

Write a `class Person` 
  * with private member variables:
    * `string title`
    * `string first_name`
    * `string last_name`
  * a `public` constructor that takes three strings and initializes the member variables
  * public functions:
    * `string getTitle() const { ... }`
    * `string getFirst() const { ... }`
    * `string getLast() const { ... }`
Implement `ostream& operator<<(ostream& os, const Person& p) { ... }`
Write a main that 
  * reads in information about one person at a time, storing each Person in a vector
  * uses a for-each loop to iterate over the Person objects, using your custom cout to print each Person (**you may not use the getTitle(), getFirst(), and getLast() methods here**)

### What the result should look like:
  
<pre>./a24
On each line, enter a person's title, first name, and last name:
<b>Mx.</b> <b>Aleks</b> <b>River</b>
<b>Dr.</b> <b>Sam</b> <b>Beckett</b>
<b>Captain</b> <b>Michael</b> <b>Burnham</b>
Your people are:
Mx. Aleks River
Dr. Sam Beckett
Captain Michael Burnham
</pre> 



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch04.xhtml#ch04

