
#include <iostream>


class Animal {
public:
    static int count;
    
public:
    static int getCount(){
        return count;
    }

public:
    
    Animal(){
        count++;
        std::cout << "Animal Constructor!" << std::endl;
        std::cout << "Total: " << count << std::endl;
    }

    ~Animal(){
        count--;
        std::cout << "Animal Destructor!" << std::endl;
        std::cout << "Ramase: " << count << std::endl;
    }
    
    
 };
 int Animal::count = 0;
 
class Mamifer : public Animal {
public:
    Mamifer(){
        std::cout << "Mamifer Constructor!" << std::endl;
    }
    
    ~Mamifer(){
        std::cout << "Mamifer Destructor!" << std::endl;
    }    
};

class Peste : public Animal {
public:
    Peste(){
        std::cout << "Peste Constructor!" << std::endl;
    }
    
    ~Peste(){
        std::cout << "Peste Destructor!" << std::endl;
    }    
};
int main()
{
    Animal animal0;
    Mamifer mamifer0;
    Peste peste0;
    
    std::cout << "--- Animale active: " << Animal::getCount() << " ---" << std::endl;
    
return 0;
}