#include <complex>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cinttypes>
 
int main(int, char**)
{
// genereaza un nr random intre 0 si 100
// citeste de la tastatura un numar
// calculeaza diferenta absoluta intre numarul random si cel citit
// std::abs -> https://en.cppreference.com/w/cpp/numeric/math/abs

// daca diferenta > 20 print "foarte rece"
// daca diferenta > 10 <= 20 print "rece"
// daca diferenta > 5  <= 10 print "cald"
// daca diferenta <= 5 print "foarte cald"
// daca se ghiceste numarul print "BINGO!"

// daca se apasa '0' se iese din bucla
// Optional: daca se apasa '1' se genereaza un nr random nou cjp-nbdz-igg

       std::srand(std::time({})) ; 
    int random_value = std::rand ()%101;
    
        //std::cout << random_value;
        std::cout << "Numar : "<<std::endl;
        int input_number, dif;
        
        while(true) 
     {
         std::cin>>input_number;

         dif =std::abs(input_number - random_value);
         std::cout<< "Diferenta dintre numere este :"<<dif<<std::endl;

        if(dif == 0) {
            std::cout<<"Bingo!"<<std::endl;
            break;
        }  
        else if(dif > 20)
            std::cout<< "Foarte rece!"<<std::endl;
            
        else if(dif > 10)
            std::cout<<"Rece!"<<std::endl;
        
        else if(dif > 5)
            std::cout<<"Cald!"<<std::endl;
            
        else if(dif<= 5)
            std::cout<<"Foarte cald!"<<std::endl;
     }
    
     
       return 0;
}