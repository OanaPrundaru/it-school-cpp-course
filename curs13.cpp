#include <iostream>


class Animal {
   // int a, b, c;
   public:
    inline static int count = 3;
    
protected:
    int d;

public:
    Animal(){
        std::cout << "Animal #1 Constructor!" << std::endl;
    }

    ~Animal(){
        std::cout << "Animal Destructor!" << std::endl;
    }
    
 };

class Mamifer : private Animal {
public:
    Mamifer(){
        std::cout << "Mamifer Constructor!" << std::endl;
    }
    
    ~Mamifer(){
        std::cout << "Mamifer Destructor!" << std::endl;
    }    
};
int main()
{
   // Mamifer mam0;
   std::cout << Animal::count << std::endl;

 

    return 0;
}