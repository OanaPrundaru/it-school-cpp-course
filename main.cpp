

#include <iostream>
#include <cstdint>

int main()
{   
    int input =0;
     
    std::cout <<" Introdu un numar: " <<std::endl;
    std::cin >>input;
    
    std::cout << "Numarul : "<<std::endl;   
    
    int rest = input %2;
    
    if (rest ==0) { 
        std::cout <<"Numarul este par!" <<std::endl;}
    
    else {
        std::cout <<"Numarul este impar!" <<std::endl; }
    
    return 0;
}



