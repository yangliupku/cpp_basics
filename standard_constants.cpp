#include <iostream>

int main()
{
    auto saved = true;
    auto active = false;
    std::shared_ptr<char> buffer = nullptr;
    std::cout << saved << active << std::endl;
}