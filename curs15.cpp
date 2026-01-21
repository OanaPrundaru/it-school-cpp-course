#include <iostream>

void testFunc(int& value) {

}
int main()
{

    int var_0 = 0;
    int var _1 = 10;

    // int testVar = 0;
    // //addr(id)
    // //value
    // //label

    // int* ptestVar = &testVar;

    // int& reftestVar = testVar;

    std::cout << var_0 << std::endl;
    
    int& refValue = var_0;

    std::cout << refValue << std::endl;

    refValue +=1;

    std::cout << var_0 <<std::endl;
    std::cout << var_1 <<std::endl;
    std::cout << refValue <<std::endl;

    return 0;
}