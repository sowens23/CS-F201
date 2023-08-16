# HW02 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_b.cpp` in the `part_b` subdirectory of your HW02 repository. 
* In `part_b.cpp`, you should define a function with the following signature:
  - `string centered_line(char c, int width, char p, int padding)`
  - When called, this function should return a string. 
    * The string sholud consist of sequence of characters (`p`) followed by a sequence of characters (`c`) followed by a sequence of characters (`p`)
    * The values `width` and `padding` specify the width of each `c` and `p` sequence. 
* When your code is compiled and run, the resulting program should:
  - Declare variables `int width`, `char c`, `int padding`, and `char c`, using the `{}`-style initialization
  - Use a while loop to continue until the user ends the program by invoking the [end-of-input character](https://en.wikipedia.org/wiki/End-of-Transmission_character) (Control+d on Linux and Mac), each time prompting the user to enter four values
    * a char `c`
    * an int `width`
    * a char `p`
    * an int `padding`.
  - Within the while loop,
    * Print a message confirming the values read
    * Call the centered_line function with the values provided by the user, printing the result


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Enter a character and a width for printing, and a character and a width to use for padding before and after:
> <b># 10 _ 5</b>
Printing 10 copies of char '#' with 5 padding using char '_'
_____##########_____
> <b>b 7 a 2</b>
Printing 7 copies of char 'b' with 2 padding using char 'a'
aabbbbbbbaa
>
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW02 Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of your HW02 git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### Grading rubric

If the above criteria are met, [the grading rubric for Part B](rubric.tsv) will be used to assign credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapter 4 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part B indicates successful demonstration of the skills listed in [the grading rubric for Part B](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

