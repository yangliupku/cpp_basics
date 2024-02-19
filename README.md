# cpp_basics

some basic c++ snippets

## hello world

```
#include <iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    return 0;
}
```

## functions

```
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
