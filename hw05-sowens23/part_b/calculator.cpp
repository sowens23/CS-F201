/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-11

    Program Name : calculator.cpp 
Program Function : calculator program originally programmed by Lane S. - Editing per HW05.

Additional Notes;

*/

#include <iostream>
#include <stdexcept>
#include "Token.h"
#include "TokenStream.h"
#include "Interpreter.h"

using std::cin;
using std::cerr;
using std::cout;
using std::endl;

int main() {
  try {
    Interpreter calculation;
    double result = 0;
    while (cin) {
      Token t = calculation.ts.get();
      if (t.kind == 'q') break;
      if (t.kind == ';') {
	cout << "Result = " << result << endl;
      } else {
	      calculation.ts.putback(t);
      }

      result = calculation.expression();
    }
  }
  catch (std::exception& e) {
    cerr << e.what() << endl;
    return 1;
  }
  catch (...) {
    cerr << "exception" << endl;;
    return 2;
  }
}
