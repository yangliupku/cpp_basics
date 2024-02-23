# cpp_basics

some basic c++ snippets

## hello world

```cpp
#include <iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    return 0;
}
```

## Functions

```cpp
#include <iostream>

bool is_even_bool(int number){
    bool is_even = (number % 2)==0;
    return is_even;
}


int main(){
    std::cout<<is_even_bool(3)<<std::endl;
    std::cout<<is_even_bool(4)<<std::endl;
    std::cout<<is_even_bool(3.5)<<std::endl; //will implicitly convert 3.5 to 3
    return 0;
}
```

function call will implicitly cast input to defined argument type.

## Standard Constants

```cpp
auto saved = true;
auto active = false;
std::shared_ptr<char> buffer = nullptr;
```

## Operations

```cpp
auto a = 10;
std::cout << a + 1 << std::endl;
std::cout << a - 1 << std::endl;
std::cout << a * 2 << std::endl;
std::cout << a / 3 << std::endl; // 3
std::cout << a / 3.0 << std::endl; // 3.333
std::cout << ++a << std::endl; // 11
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
```

## Variable scope

```cpp
auto foo = 1;
{
    auto foo = 2;
    std::cout << foo << std::endl;  // 2
}
std::cout << foo << std::endl;  //1
```
