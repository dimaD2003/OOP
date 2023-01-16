#include <ostream>
#include <iostream>
#include "Operator/operator.h"

int main()
{
    std::string MyString;
    std::cout << "Enter ..." << std::endl;
    std::cin >> MyString;
    std::cout << std::endl;

    std::cout << "decode string is   " << InOPZ(MyString) << std::endl;
    return 0;
}
