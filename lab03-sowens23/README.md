# Lab 03

## Instructions

* Complete as many of the following tasks as you can. You must successfully complete at least _**the first two**_ of these tasks to receive credit for this lab.
* Regularly check in your changes using `git add`, `git commit -m "Your meaningful message goes here"`, and `git push`. In order to receive full credit in the homework assignments, you must regularly check in your changes. The first commit for every `.cpp` file should be a minimal C++ program that contains only `int main() 
{ 
   return 0;    
}`
* When you complete a task, change the empty checkbox `- [ ]` for that task to a completed checkbox `- [x]`

- [X] twenty.cpp
- [X] box.cpp 
- [X] alternate.cpp


## Required

### twenty.cpp

* Write a program called `twenty.cpp`:
  - Use a for loop to print the positive integers from 1 to 20, one number per line


### box.cpp

* Write a program called `box.cpp` that:
  - [ ] Prompts the user for a positive integer representing a width and a positive integer representing a height
  - [ ] Create a for loop that iterates from 1 up to and including height
  - [ ] Within that for loop, create another for loop that iterates from 1 up to and including width
  - [ ] Within the inner for loop, print a line consisting of the character `*` that is as long as width
  - [ ] The result should be a printed box made of the character `*` that is width by height in size

```$ ./box
Enter a width and a height: 8 3
********
********
********
```


## Recommended

### alternate.cpp

* Write a program called `alternate.cpp` that:
  - [ ] Replicates the functionality from `box.cpp`, except that instead of using all `*` characters, alternate between `*` and `#` characters

```$ ./alternate
Enter a width and a height: 8 3
*#*#*#*#
#*#*#*#*
*#*#*#*#
```
