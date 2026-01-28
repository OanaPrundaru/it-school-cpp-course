#include <string>
#include <iostream>
#include <vector>


const char* veryBigString = "Computer programming or coding is the composition of sequences of instructions," 
"called programs, that computers can follow to perform tasks.[1][2] It involves designing and implementing algorithms,"
"step-by-step specifications of procedures, by writing code in one or more programming languages. Programmers typically "
"use high-level programming languages that are more easily intelligible to humans than machine code, which is directly" 
"executed by the central processing unit. Proficient programming usually requires expertise in several different subjects, "
"including knowledge of the application domain, details of programming languages and generic code libraries, specialized "
"algorithms, and formal logic."
"Auxiliary tasks accompanying and related to programming include analyzing requirements, testing, debugging "
"(investigating and fixing problems), implementation of build systems, and management of derived artifacts, such as programs' "
"machine code. While these are sometimes considered programming, often the term software development is used for this larger "
"overall process – with the terms programming, implementation, and coding reserved for the writing and editing of code per se. " 
"Sometimes software development is known as software engineering, especially when it employs formal methods or follows an " 
"engineering design process."; 

// string: find, compare, length 
// vector: insert, push_back



// TODO vector<string> splitString(const string& data) //
//  TODO int countWords(const string& data)
// TODO int countChars(const string& data, bool wSpace = true) 
// TODO vector<unsigned int> charHistogram(const string& data) (vezi ascii char table) 
 // TODO void printHistogram(const vector<unsigned int>& data)


int  main()
{
    std::string inputString = "Computer programming or";
    size_t pos = std::string::npos;
    size_t last_pos = 0

    while(pos) {
        pos = inputString.find(" ", last_pos);

        if(pos == std::string::npos) {
            break;
        } else {
            std::cout <<last_pos << "," << pos << " : " << inputString.substr(last_pos, (pos - last_pos)) << std::endl;
        }
    }
    std::cout <<last_pos <<" , "<< inputString.size() <<" : " << inputString.substr(last_pos, (pos - last_pos)) << std::endl;

    std::cout << input.String.find(" ", 0) << std::endl;
    std::cout << input.String.find(" ", 9) << std::endl;

    
    std::vector<std::string> outputVector = {"Computer", "programming", "or"};


    return 0;
}



