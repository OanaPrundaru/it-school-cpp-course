
#include <iostream>

class FortzaInt{
public:
    int value;
    
    FortzaInt(const int _value) : value(_value){}
    FortzaInt() : FortzaInt(9000) {}

    FortzaInt operator+ (const FortzaInt& other){
        return FortzaInt(this->value * other.value);
    }
};


int main()
{
    FortzaInt val0;
    FortzaInt val1(20);

    FortzaInt val2 = val0 +val1;
    
    

    return 0;
}