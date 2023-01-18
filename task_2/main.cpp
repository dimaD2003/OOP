
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include "Functions/funct.h"

int main()
{
 std::string str = input(str);
    str = hashtagMaker(str);
    output(str, std::cout);

    return 0;
}
