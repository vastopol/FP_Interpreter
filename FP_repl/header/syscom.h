#ifndef __SYSCOM_H__
#define __SYSCOM_H__

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#include <stack> 
#include <queue>
#include <list>

#include "memory.h"

void com(std::string str, Memory& m); // simple builtins handler

void def(std::string s, Memory& m); // definition, hashing name to value

void rem(std::string s, Memory& m); // access hashes and remove var if found

void print(Memory& m); // print element hash, print list hash

void help();    // help prompt

#endif // __SYSCOM_H__