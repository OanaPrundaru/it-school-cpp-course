#include <iostream>
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>

#define BUFFER_LEN 125


int main()
{
    
    std::FILE* file = fopen("./input.txt" , "rt");
    
    char buffer[BUFFER_LEN] = {0};
    size_t count =0;
    char *ret = nullptr;
    
    
    if (file == nullptr) {
        std::cout << " Woops! " << std::endl;
    } 
    else{
        while(feof(file) == 0) {
            std::cout << "current file position: " << ftell(file) <<std::endl;
            
            count = fread(buffer, sizeof(char), BUFFER_LEN, file);
            fgets(buffer, sizeof(char) * BUFFER_LEN, file);
            std::cout << "have read: " << count <<std::endl;
            std::cout <<buffer <<std::endl;
        }
    }
    fclose(file);
   
    return 0;
}



// #include <iostream>
// #include <cstdio>
// #include <cstring>
// #define BUFFER_LEN 125

// int main()
// {
//     std::FILE* file = fopen("./input.txt", "rt");
    
//     char buffer[BUFFER_LEN] = {0};
//     size_t count = 0;
//     char *ret = nullptr;

//     if (file == nullptr) {
//         std::cout << "Woops" << std::endl;
//     } else {
        
//        while (feof(file) == 0) {
//         //   std::cout << "current file position: " <<  ftell(file) << std::endl;
//         //   count = fread(buffer, sizeof(char), BUFFER_LEN, file);
//            fgets(buffer, sizeof(char) * BUFFER_LEN, file);
//         //   std::cout << "have read: " << strlen(buffer) << std::endl;
//         //   std::cout << buffer << std::endl;
//        }
//       std::cout << "current file position: " <<  ftell(file) << std::endl;
//     }
    
//     rewind(file);
//     std::cout << "current file position: " <<  ftell(file) << std::endl;

//     ret = fgets(buffer, sizeof(char) * BUFFER_LEN, file);
//     if (ret == nullptr) {
//         std::cout << "Woops" << std::endl;
//     } else {
//         std::cout << "have read: " << strlen(buffer) << std::endl;
//         std::cout << buffer << std::endl;
//     }
    
//     fclose(file);

//     return 0;
// }

// #include <iostream>
// #include <cstdio>
// #include <cstring>

// #define DEFAULT_BUF_LEN 125

// int main()
// {
//     std::FILE* file = fopen("./input.txt", "rt");
    
//     size_t current_buf_size = DEFAULT_BUF_LEN;
//     size_t current_lenght = 0;
    
//     char* buffer = (char*)malloc (DEFAULT_BUF_LEN);
//     char* write_p = buffer;
    
//     if (file == nullptr) {
//         std::cout << "Woops" << std::endl;
//     } else {
//         while(true) {
           
//             fgets(write_p, sizeof(char) * DEFAULT_BUF_LEN, file);
            
//             if(feof(file) != 0){
//                 break;
//             }
            
//             if(strpbrk(write_p, "\n") != nullptr) {
//                 std::cout << "buffer contain new line! " << std::endl;
//                 std::cout << buffer << std::endl;
                
//                 write_p = buffer;
//                 current_lenght = 0;
                
//                 memset (write_p, '\0', current_buf_size);
               
//             }
//             else{
//                 current_lenght = current_lenght + (DEFAULT_BUF_LEN -1);
//                 buffer = (char*)realloc(buffer, current_buf_size*2);
//                 write_p = &buffer[current_lenght];
//                 current_buf_size *=2;
//             }
//         }
//     }
//          // if EOL '/n' detected, print line
//         // if not, the line is bigger, expand the buffer and read further
//         // tips: use 2 pointers, dont forget to free!, use a loop
//         free(buffer);
//         fclose(file);

//     return 0;
// }


// C++

// #include <iostream>
// #include <string>
// #include <fstream>



// int main()
// {
//     std::ifstream file("input.txt", std::ios::binary);
//     std::string line;
    
//     while (std::getline(file, line)){
//         std::cout << line <<"\n";
        
//     }
    

//     return 0;
// }
