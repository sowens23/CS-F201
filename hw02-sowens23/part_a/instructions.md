# HW01 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a thorough understanding of the contents from [Chapter 4 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_a.cpp` in the `part_a` subdirectory of your HW02 repository. 
* In `part_a.cpp`, you should define a function with the following signature:
  - `string centered_line(char c, int width, char p, int padding)`
  - When called, this function should return a string. 
    * The string sholud consist of sequence of characters (`p`) followed by a sequence of characters (`c`) followed by a sequence of characters (`p`)
    * The values `width` and `padding` specify the width of each `c` and `p` sequence. 
* In `part_a.cpp`, you should define a function with the following signature:
  - `void print_diamond(int height)`
  - When called, this function should:
    * Verify that height is a positive integer. If it is,
      - Create a `vector` of `string`s called `lines`
      - Use integer arithmetic, for loops, and `push_back` to create one string per line such that the entire vector represents a diamond of `#` characters with ` ` characters as the padding
      - Use a for-each loop and `cout` to print the diamond
* When your code is compiled and run, the resulting program should:
  - Declare variables `int height` and `string prompt` using `{}`-style initialization
  - Use a while loop to continue until the user ends the program by invoking the [end-of-input character](https://en.wikipedia.org/wiki/End-of-Transmission_character) (Control+d on Linux and Mac), each time prompting the user to a positive odd number
  - Within the while loop,
    * Call `print_diamond` with the `height` provided by the user


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_a 
Enter a positive odd integer: <b>-4</b>
Enter a positive odd integer: <b>-9</b>
Enter a positive odd integer: <b>10</b>
Enter a positive odd integer: <b>0</b>
Enter a positive odd integer: <b>5</b>
  #  
 ### 
#####
 ### 
  #  
Enter a positive odd integer: <b>7</b>
   #   
  ###  
 ##### 
#######
 ##### 
  ###  
   #   
Enter a positive odd integer: <b>18</b>
Enter a positive odd integer: <b>3</b>
 # 
###
 # 
Enter a positive odd integer: <b>4</b>
Enter a positive odd integer: <b>6</b>
Enter a positive odd integer: <b>1</b>
#
Enter a positive odd integer: <b>11</b>
     #     
    ###    
   #####   
  #######  
 ######### 
###########
 ######### 
  #######  
   #####   
    ###    
     #     
Enter a positive odd integer:
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part A, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_a.cpp` located in the `part_a` subdirectory (not in the root of your HW01 git repository)
* The file `part_a.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_a part_a.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part A.


### Grading rubric

If the above criteria are met, [the grading rubric for Part A](rubric.tsv) will be used to assign credit for Part A.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part A of this assignment is designed to assess thorough understanding of the content from [Chapter 4 of Programming Principles and Practice using C++][textbook].

The term **thorough understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part A indicates successful demonstration of the skills listed in [the grading rubric for Part A](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

