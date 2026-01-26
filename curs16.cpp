#include <iostream>
#include <string>


int main()
{
    std::string testString = "";

    std::cout << testString.size() << std::endl;
    std::cout << testString.lengh() << std::endl;
    std::cout << testString.max_size() << std::endl;
    std::cout << testString.capacity() << std::endl;

    while(1) {
            std::cout << "std::string testString addr: " << &testString << std::endl;
            std::cout << "std::string testString.data() : " << (nullptr_t*)testString.data() <<std::endl;

            int aux;
            std::cin >> aux;
            testString += "some test phase ++++++++++++++"

            std::cout << "size: " << testString.size() << std::endl;
            std::cout << "capacity : " << testString.capacity() <<std::endl;
        }
    delete testString;
return 0;
}
