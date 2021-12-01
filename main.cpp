#include <iostream>
#include "headers.h"

int main()
{
    std::cout << "Enter command: ";
    std::string input;
    std::cin >> input;
    coord c1,c2;

    if(input=="scalpel")
    {
        std::cout << "Enter first x and y: ";
        std::cin >> c1.x >> c1.y;
        std::cout << "Enter second x and y: ";
        std::cin >> c2.x >> c2.y;
        scalpel(c1,c2);
    }
    else if(input=="hemostat")
    {
        std::cout << "Enter x and y: ";
        std::cin >> c1.x >> c1.y;
        hemostat(c1);
    }
    else if(input=="tweezers")
    {
        std::cout << "Enter x and y: ";
        std::cin >> c1.x >> c1.y;
        tweezers(c1);
    }
    else if(input=="suture")
    {
        std::cout << "Enter first x and y: ";
        std::cin >> c1.x >> c1.y;
        std::cout << "Enter second x and y: ";
        std::cin >> c2.x >> c2.y;
        suture(c1,c2);
    }

    return 0;
}
