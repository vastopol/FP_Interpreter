#ifndef __INTERPRETER_H__
#define __INTERPRETER_H__

#include <iostream>
#include <string>
#include <stack> 
#include <queue>
#include <iterator>

#include "memory.h"
#include "node.h"

class Interpreter
{
    private:
        // Helper functions
        bool isBalanced(std::string s);        // refers to brackets, braces, parentheses...
        std::string trimSpace(std::string s);  // removes any (leading || trailing) whitespace characters

    public:
        Interpreter(){};
        ~Interpreter();
        
        Node* parse(std::string s, Memory* m); // parse engine    
};

#endif // __INTERPRETER_H__

