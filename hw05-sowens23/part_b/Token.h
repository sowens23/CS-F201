/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-9

    Program Name : Token.H 
Program Function : Header file used to store the Token class for the calculator app.

Additional Notes;

*/

#pragma once

class Token {
public:
  char kind;        // what kind of token
  double value;

  Token() {
    kind = 'u';
    value = 0;
  }
  
  Token(char ch) {   // make a Token from a char
    kind = ch;
    value = 0;
  }
  
  Token(char ch, double val) {
    kind = ch;
    value = val;
  }

};
