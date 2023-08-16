# Lab 02

## Instructions

* Complete as many of the following tasks as you can. You must successfully complete at least one of these tasks to receive credit for this lab.
* Regularly check in your changes using `git add`, `git commit -m "Your meaningful message goes here"`, and `git push`. In order to receive full credit in the homework assignments, you must regularly check in your changes. The first commit for every `.cpp` file should be a minimal C++ program that contains only `int main() 
{ 
   return 0;    
}`
* When you complete a task, change the empty checkbox `- [ ]` for that task to a completed checkbox `- [x]`

- [X] odd.cpp
- [X] date.cpp 
- [X] divide.cpp


## odd.cpp

* Write a program called `odd.cpp` that implements question 8 from the Chapter 3 end-of-chapter exercises:
  - Prompt the user for an integer
  - Use modulo and `if` to determine whether the number is odd or even
  - Print a message informing the user whether their number is even or odd. The message should look like this: `The value 4 is an even number`


## date.cpp

* Write a program called `date.cpp` that:
  - [ ] Prompts the user for a month, day, and year (as integers)
  - [ ] Prints the provided date in ISO 8601 format (YYYY-MM-DD) 
  - [ ] Ensures that leading zeroes are included where necessary (for example 2018-01-22)


## divide.cpp

* Write a program called `divide.cpp`. This program should do the following:
  - [ ] Prompt the user to enter two numbers
  - [ ] Use `cin` to read two numbers from the user, storing each as a `double`
  - [ ] Print a message that presents the user with the result of dividing the first number by the second number
  - [ ] Use the `{}`-list notation, attempt to convert each of the two numbers from `double` to `int`. 
      - Note the error message. 
      - If your error message was `error: expected ';' at end of declaration`, then you need to add the flag `-std=c++17` when you call `g++`. 
      - Once you do that, you should get the error message `type 'double' cannot be narrowed to 'int' in initializer list`
      - Fix the error by explicitly casting your existing `double` variables using `static_cast<int>( )`
  - [ ] Using these two newly converted integer values, print a message that presents the user with the result of dividing the first integer by the second integer
  - [ ] Using these same two integer values, print a message that presents the user with the result of the first integer modulo the second integer
 
