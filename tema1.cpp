#include <complex>
#include <iostream>
#include <limits>
#include <climits>
 
int main(int, char**)
{
        std::complex<float> a(20);
        std::complex<float> b(75);
    
        std::cout<<"Rezultatul este : "<<std::endl;
        std::cout << a << " * " << b << " = " << a * b << '\n';
       
   
    int test =0;
        
        std::cout<<"Min size :" <<std::numeric_limits<int>::min()<<std::endl;
        std::cout<<"Max size :" <<std::numeric_limits<int>::max()<<std::endl;
    if ((a*b) >=std::min)
        std::cout<<"Erorr"<<std::endl;
    
    else
        std::cout<<""<<std::endl;
    
     if ((a*b) >=std::max)
        std::cout<<"Erorr"<<std::endl;
    
    else
        std::cout<<""<<std::endl;    
    
    return 0;
    
}

