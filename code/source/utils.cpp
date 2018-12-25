// utility functions used in different parts

#include <string>

std::string trimSpace(std::string s)     // removes any (leading || trailing) whitespace characters
{
    if(s.empty()){return s;}
    while(s.at(0) == ' ')                // remove any leading spaces
    {
        if(s.size() == 1){return "";}
        s = s.substr(1, (s.size()-1));
    }
    while(s.at(s.size()-1) == ' ')       // remove any trailing spaces
    {
        if(s.size() == 1){return "";}
        s = s.substr(0, (s.size()-1));
    }
    return s;
}
//----------------------------------------------------------------------------------------------


std::string trimSharp(std::string s) // remove comments
{
    unsigned pos = s.find('#');
    if( pos != std::string::npos && pos < s.size() )
    {
        s = s.substr(0, pos);
    }
    return s;
}
//----------------------------------------------------------------------------------------------
