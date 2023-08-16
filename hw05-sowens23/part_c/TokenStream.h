/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-9

    Program Name : TokenStream.h 
Program Function : Header file used to store TokenStream class

Additional Notes;

*/

#pragma once
#include <iostream>
#include "Token.h"

using std::cin;

class TokenStream {
    private:
        bool full;
        Token buffer;
    public:
        TokenStream() {
            full = false;
        }
        Token get();
        void putback(Token t);
};
