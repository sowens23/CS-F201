/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-11

    Program Name : Interpreter.cpp 
Program Function : Interpreter class definitions.

Additional Notes;

*/

#include <iostream>
#include "Token.h"
#include "Interpreter.h"

double Interpreter::primary() {    // read and evaluate a Primary
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

double Interpreter::expression() {
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

double Interpreter::term() {
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
