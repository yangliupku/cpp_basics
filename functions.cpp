#include <iostream>

bool is_even_bool(int num)
{
    bool is_even = (num % 2) == 0;
    return is_even;
}

int main()
{
    std::cout << is_even_bool(3) << std::endl;
    std::cout << is_even_bool(4) << std::endl;
    std::cout << is_even_bool(3.5) << std::endl;
    return 0;
}