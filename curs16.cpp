
#include <iostream>
#include <string>


int main()
{
    // std::string testString = "";

    // std::cout << testString.size() << std::endl;
    // std::cout << testString.length() << std::endl;
    // std::cout << testString.max_size() << std::endl;
    // std::cout << testString.capacity() << std::endl;

    // while(1) {
    //         std::cout << "std::string testString addr: " << &testString << std::endl;
    //         std::cout << "std::string testString.data() : " << (nullptr_t*)testString.data() <<std::endl;

    //         int aux;
    //         std::cin >> aux;
    //         testString += "some test phase ++++++++++++++";

    //         std::cout << "size: " << testString.size() << std::endl;
    //         std::cout << "capacity : " << testString.capacity() <<std::endl;
    // }
    // testString.clear();

    std::vector<int> testVector = {0, 1, 2};

    for (const int& i :testVector) {
        std::cout << i << std::endl;
    }

    std::cout << "size: " << testVector.size() << std::endl;
    std::cout << "capacity : " << testVector.capacity() <<std::endl;
        while(1) {
             std::cout << "std::string testVector addr: " << &testString << std::endl;
             std::cout << "std::string testVector.data() : " << (nullptr_t*)testVector.data() <<std::endl;

             int aux;
             std::cin >> aux;
             testVector += "some test phase ++++++++++++++";

             std::cout << "size: " << testVector.size() << std::endl;
             std::cout << "capacity : " << testVector.capacity() <<std::endl;
 }

return 0;
}
