#include <iostream>

int main()
{
    auto foo = 1;
    {
        auto foo = 2;
        std::cout << foo << std::endl;
    }
    std::cout << foo << std::endl;
}