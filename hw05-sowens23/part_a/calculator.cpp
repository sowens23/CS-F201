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
using std::string;

int main() {
    string prompt {"Equation: "};
    try {
        Interpreter calculation;
        double result = 0;
        cout << "\033[2J\033[1;1H";
        cout << "Welcome to Calculator.\n";
        cout << "Please enter an equation followed by a ';'.\n";
        cout << "When you are done, just enter 'q' or press CTRL-D.\n";
        cout << prompt;
        while (cin) {
            Token t = calculation.ts.get();
            if (t.kind == 'q') break;
            if (t.kind == ';') {
                cout << "Result = " << result << endl;
                cout << prompt;
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
