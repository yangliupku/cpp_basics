#include <iostream>
int main()
{
    // arithmetic
    auto a = 10;
    std::cout << a + 1 << std::endl;
    std::cout << a - 1 << std::endl;
    std::cout << a * 2 << std::endl;
    std::cout << a / 3 << std::endl;   // 3
    std::cout << a / 3.0 << std::endl; // 3.333
    std::cout << ++a << std::endl;     // 11
    a = 10;
    std::cout << a++ << std::endl; // 10

    // logical
    std::cout << (true && false) << std::endl;
    std::cout << (true || false) << std::endl;
    std::cout << (!true) << std::endl;

    // bitwise
    std::cout << std::hex << (0xf0 & 0x0f) << std::endl; // 0x00 bitwise and
    std::cout << std::hex << (0xf0 | 0x0f) << std::endl; // 0xff bitwise or
    std::cout << std::hex << (0xf1 ^ 0xf0) << std::endl; // 0x01 xor
    std::cout << std::hex << (~0xf0f0f0f0) << std::endl; // 0x0f0f0f complement
    return 0;
}