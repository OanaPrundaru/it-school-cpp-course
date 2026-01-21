
#include <iostream>

// class FortzaInt{
// public:
//     int value;
    
//     FortzaInt(const int _value) : value(_value){}
//     FortzaInt() : FortzaInt(9000) {}

//     FortzaInt operator+ (const FortzaInt& other){
//         return FortzaInt(this->value * other.value);
//     }
// };


// int main()
// {
//     FortzaInt val0;
//     FortzaInt val1(20);

//     FortzaInt val2 = val0 +val1;
    
    

//     return 0;
// }



// class Animal{
// public:
//     virtual void makeSound() const{
//         std::cout << "Generic Animal Sound!" <<std::endl;
//     }
// };

// class Mamifer : public Animal {
// public:
//     virtual void makeSound() const{
//         std::cout << "Mamifer Sound!" <<std::endl;
//     }
// };

// class InvalidAnimal{
// public:
//      void makeSound() const{
//         std::cout << "Mamifer Sound!" <<std::endl;
//     }
// };

// int main(){

//     std::cout << sizeof(Animal) <<std::endl;
//     std::cout << sizeof(Mamifer) <<std::endl;

//     Animal a0;
//     a0.makeSound();

//     Mamifer m0;
//     m0.makeSound();

//     Animal* pa0 = static_cast<Animal*>(&m0);
//     pa0->makeSound();

    // InvalidAnimal* pa0 = dynamic_cast<InvalidAnimal*>(&m0);

    // if(nullptr == pa0){

    
//     return 0;
// }

#include <iostream>

class Mule;
class Donkey;
class Horse;

class Horse {
public:
   int h;
    Mule operator+(const Donkey& other);

    virtual void makeSound() const{
        std::cout << "Horse sound!" << std::endl;
    }

    Horse(){
        std::cout << "Horse constructor!" << std::endl;
    }
    ~Horse(){
        std::cout <<"Horse destructor!" << std::endl;
    }
    
};

class Donkey{
public:
    int d;
    Mule operator+(const Horse& other);

    virtual void makeSound() const{
        std::cout << "Donkey sound!" << std::endl;
    }

    Donkey(){
        std::cout << "Donkey constructor!" << std::endl;
    }
    ~Donkey(){
        std::cout <<"Donkey destructor!" << std::endl;
    }
    
};

class Mule : public Horse, public Donkey{
public:
    int m;
    void makeSound() const override{

        std::cout << "Mule sound!" << std::endl;
    }

    Mule(){
        std::cout << "Mule constructor!" << std::endl;
    }
    ~Mule(){
        std::cout <<"Mule destructor!" << std::endl;
    }
};
    Mule Horse::operator+(const Donkey& other){
       std::cout << __FUNCTION__<< std::endl;
        return Mule();
    }
    Mule Donkey::operator+(const Horse& other){
        return Mule();
    }


int main(){


    Horse h;
    Donkey d;
    
    std::cout << sizeof(Horse) <<std::endl;
    std::cout << sizeof(Donkey) <<std::endl;
    std::cout << sizeof(Mule) <<std::endl;

    Mule m = h + d;

    return 0;
}