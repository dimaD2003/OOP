#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include "Functions/funct.h"

std::string input(std::string s)
{
   std::getline(std::cin, s);
    try
    {
        if (s.empty())
        {
            throw(s);
        }
    }
    catch (...)
    {
        std::cout << "String is empty" << std::endl;
    }
    return s;
}
std::string DeleteSpace(std::string &s)
{
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    return s;
}

std::string hashtagMaker(std::string s)
{
    std::string v;
    char first;
    s = DeleteSpace(s);
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            first = (char)toupper(s[i]);
        }
        else
            v += s[i];
    }
    s = first + v;
    // std::cout << "#" << first << v;

    s = '#' + s;
    return s;
}


void output(std::string s, std::ostream &os)

{

    std::string v;
    char first;
    int k = 0;
    try
    {
        if ((s.empty()) || (s.length() > 100))
        {

            throw(s);
        }
        else
        {
            os << s;
        }
    }
    catch (...)
    {
       os << "X is empty or more than 100 symbols \n";
    }
}
