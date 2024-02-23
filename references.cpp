#include <iostream>

void foo(int &input)
{
    input += 1;
}

void bar(const int &input)
{
    std::cout << input << std::endl;
    // input += 1;
    // ^ compiler error. can't modify var
}

int main()
{
    int a = 5;
    foo(a);
    std::cout << a << std::endl;
    return 0;
}