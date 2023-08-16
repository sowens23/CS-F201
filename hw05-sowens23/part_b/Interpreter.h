/*

 Name : Spencer Owens
Class : Fall CS F201
 Date : 2022-Nov-11

    Program Name : Interpreter.h 
Program Function : Making Interpreter declarations. 

Additional Notes;

*/

#pragma once
#include <iostream>
#include "TokenStream.h"

class Interpreter {
    public:
        TokenStream ts;
        double primary();    // read and evaluate a Primary
        double expression();
        double term();
};
