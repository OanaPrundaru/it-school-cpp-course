//#include <iostream>

// void testFunc(int& value) {

// }
// int main()
// {

//     int var_0 = 0;
//     int var _1 = 10;

//     // int testVar = 0;
//     // //addr(id)
//     // //value
//     // //label

//     // int* ptestVar = &testVar;

//     // int& reftestVar = testVar;
#include <iostream>
#include <cstdlib>

class DiceGenInterface {
 protected:
    unsigned int count = 0;

 public:
    enum Type : unsigned int {
        D4 = 4,
        D6 = 6,
        D8 = 8,
        D10 = 10,
        D12 = 12,
        D20 = 20,
    };

    virtual unsigned int roll(const Type dice = D6) = 0;
    
    DiceGenInterface(unsigned seed = time(0)) {
        std::srand(seed);
    }
    
    unsigned int getCount() {
        return this->count;
    }
};

class DiceGen : public DiceGenInterface {
public:
    unsigned int roll(const Type dice = D6) override {
        this->count += 1;
        return (1 + (rand() % static_cast<unsigned int>(dice)));
    }
};

class TestDiceGen : public DiceGenInterface {
public:
    unsigned int roll(const Type dice = D6) override {
        this->count += 1;
        return static_cast<unsigned int>(dice);
    }
};

int main()
{
    DiceGen dice0;
    TestDiceGen dice1;
    
    std::cout << dice0.roll(DiceGen::D20) << std::endl;
    std::cout << dice0.roll(DiceGen::D20) << std::endl;
    std::cout << dice0.roll(DiceGen::D20) << std::endl;
    
    std::cout << dice1.roll(DiceGen::D20) << std::endl;
    std::cout << dice1.roll(DiceGen::D20) << std::endl;
    std::cout << dice1.roll(DiceGen::D20) << std::endl;
    
    std::cout << dice0.getCount() << std::endl;
    std::cout << dice1.getCount() << std::endl;

    return 0;
}
//     std::cout << var_0 << std::endl;
    
//     int& refValue = var_0;

//     std::cout << refValue << std::endl;

//     refValue +=1;

//     std::cout << var_0 <<std::endl;
//     std::cout << var_1 <<std::endl;
//     std::cout << refValue <<std::endl;

//     return 0;
// }



// #include <iostream>
// //     support dice value gen D4, D6, D8, D10, D12, D20

// class DiceGenerator {
//     static inline unsigned int rolls = 0;
// public:
//     enum Type : unsigned int {
//     D4 = 4,
//     D6 = 6,
//     D8 = 8,
//     D10 = 10,
//     D12 = 12,
//     D20 = 20
// };
// static unsigned int getValue(const Type type = D6) {
//     rolls++;

//     return (1 + (rand() % type));
// }

// static unsigned int getRolls(){
//     return rolls;
// }
// };
// // int getD4Value(){
// //     return (1 + rand() % 4));
// // }



// int main()
// {
//     DiceGenerator gen;

//     std::cout << DiceGenerator::getValue(DiceGenerator::D4) << std::endl;
//     std::cout << DiceGenerator::getRolls() << std::endl;
//     // std::cout << gen.getValue(DiceGenerator::D6) << std::endl;
//     // std::cout << gen.getValue(DiceGenerator::D8) << std::endl;
//     // std::cout << gen.getValue(DiceGenerator::D10) << std::endl;
//     // std::cout << gen.getValue(DiceGenerator::D12) << std::endl;
//     // std::cout << gen.getValue(DiceGenerator::D20) << std::endl;

   
//     return 0;
// }
