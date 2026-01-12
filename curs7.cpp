#include <iostream>
#include <cstring>

#define BUFF_MAX_LEN 256

int main()
{
    
    char buffer[BUFF_MAX_LEN];
    char letter;
    
    std::cin >> letter;
    std::cout << "Am citit:" << letter << std::endl;
    
    std::cin >> buffer;
    std::cout << "Am citit:" << buffer << std::endl;
    
    int buffer_count = strlen(buffer);
    int letter_count = 0;
    
    
   for(int i = 0; i < buffer_count; i++){
       if(buffer[i] == letter){
           letter_count++;
       }
   }
    std::cout<<"Am gasit litera : "<<letter<<" de "<<letter_count<<"ori!";   
    
    
    // count letter in buffer

    return 0;






    am folosit ca functie


#include <iostream>
#include <cstring>
#define BUFF_MAX_LEN 256


int letter_counter(char buffer[], char letter)
{
    int n = strlen(buffer);

    int counter = 0;
    
    for(int i = 0; i < n; i++){
        if(buffer[i] == letter){
            counter++;
        }
    }
    return counter;
}

int main()
{
    
    char buffer[BUFF_MAX_LEN];
    char letter;
    
    std::cin >> letter;
    std::cout << "Am citit:" << letter << std::endl;
    
    std::cin >> buffer;
    std::cout << "Am citit:" << buffer << std::endl;
    
    std::cout<<"Am gasit litera : "<<letter_counter(buffer,letter)<<" de ori!";   
    
    
    // count letter in buffer

    return 0;
}

}
