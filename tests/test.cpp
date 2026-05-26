#include <iostream>
#include "../include/calculator.h"

int main()
{
    if(Add(5,3)!=8)
    {
        std::cout<<"Add test failed\n";
        return 1;
    }

    if(Subtract(10,3)!=7)
    {
        std::cout<<"Subtract test failed\n";
        return 1;
    }

    std::cout<<"All tests passed\n";

    return 0;
}