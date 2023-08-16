/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-11

    Program Name : TokenStream.cpp 
Program Function : Stores TokenStream class Public functions; Token get() and Void putback(Token t)

Additional Notes;

*/

#include <iostream>
#include "Token.h"
#include "TokenStream.h"

using std::cin;
using std::cout;

Token TokenStream::get() {
    if (full) {
        full = false;
        return buffer;
    } else {
        char ch;
        cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)
        switch (ch) {       
        case ';':
        case 'q':
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token(ch);        // let each character represent itself
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('n', val);   // let 'n' represent "a number"
        }
        default:
            throw std::runtime_error("Bad token");
        }
    }
}

void TokenStream::putback(Token t) {
    if (full) throw std::runtime_error("putback() into a full buffer");
    buffer = t;
    full = true;
}

