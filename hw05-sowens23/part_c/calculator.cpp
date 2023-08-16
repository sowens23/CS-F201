/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-16

    Program Name : calculator.cpp 
Program Function : calculator program originally programmed by Lane S. - Editing per HW05.

Additional Notes;

*/

#include <iostream>
#include <stdexcept>
#include "TokenStream.h"

using std::cin;
using std::cerr;
using std::cout;
using std::endl;

TokenStream ts;
double expression();  // read and evaluate a Expression
double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary() {    // read and evaluate a Primary
    Token t = ts.get();
    switch (t.kind) {
    case '(': {   // handle '(' expression ')'
        double d = expression();
        t = ts.get();
        if (t.kind != ')') throw std::runtime_error("')' expected");
        return d;
    }
    case 'n':            // we use 'n' to represent a number
        return t.value;  // return the number's value
    default:
        throw std::runtime_error("primary expected");
    }
}

//------------------------------------------------------------------------------

int main() {
    try {
        double result = 0;
        while (cin) {
            Token t = ts.get();
            if (t.kind == 'q') break;
            if (t.kind == ';') {
	            cout << "Result = " << result << endl;
            } else {
	            ts.putback(t);
            }
            result = expression();
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

//------------------------------------------------------------------------------

double expression() {
    double left = term();      // read and evaluate a Term
    Token t = ts.get();     // get the next token
    while (true) {
        switch (t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
	    ts.putback(t);
	    return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

double term() {
    double left = primary();
    Token t = ts.get();     // get the next token
    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/': {
            double d = primary();
            if (d == 0) throw std::runtime_error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
	        ts.putback(t);
	        return left;
        }
    }
}
