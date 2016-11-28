#ifndef __MEM_H__
#define __MEM_H__

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <iterator>

class Memory
{
    private:
        // maps for holding variables
        std::map<std::string, int> elements;
        std::map<std::string, std::list<int> > sequences;
        std::map<std::string, std::string> macros;
    
    public:        
        Memory(){};
        ~Memory();
        
        // ADD
        void add_element(std::string, int);
        void add_sequence(std::string, std::list<int>);
        void add_macro(std::string, std::string);
        
        // REMOVE
        void remove_element(std::string);
        void remove_sequence(std::string);
        void remove_macro(std::string);
        
        // ACCESS
        std::map<std::string, int> get_elements();
        std::map<std::string, std::list<int> > get_sequences();
        std::map<std::string, std::string> get_macros();
        
        // PRINT
        void print_elements();
        void print_sequences(); 
        void print_macros();
};

#endif // __MEM_H__