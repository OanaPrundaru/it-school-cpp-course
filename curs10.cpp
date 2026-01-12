#include <iostream>

void magic_function {
    static int count = 0;
    
    std::cout << count << std::endl;
}
    count++;
 

int main ()
{
    magic_function();
    return 0;
}
 