#include <ostream>
#include <iostream>
#include "RingBuff/RingBuff.h"
using namespace std;

int main(){ 



    List head;
    int n = 4;
    head.init(n);
    for (int i = 1; i < 8; i++) 
    {
        head.add((char)i);
        head.Print(std::cout);
    }
return 0;
}
