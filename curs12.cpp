#include <iostream>
#include <cstdlib>
#define NAME_MAX_LEN 255
#define STR(v) #v
#define PRINT_OPTION(v) std::cout<< "  '" << v << "' = " << STR(v) << std::endl

enum GENDER : unsigned char {
    FEMALE = 'f',
    MALE = 'm',
};

enum ROLE : char {
    ARCHER = 'a',
    WARRIOR = 'w',
    MAGE = 'm',
};

enum RACE : char{
        ORC = 'o',
        HUMAN = 'h',
        ELF = 'f',
};

struct Character {
    char name[NAME_MAX_LEN];
    unsigned int age;
    
    GENDER gen;
    ROLE role;
    RACE race;
    
};

Character* create_character(){
    return (Character*) calloc (1, sizeof(Character));
}    
 
void remove_character(Character* data){
    if(NULL != data){
    free(data);
    std::cout << "Character is deleted! " << std::endl;
}
}

int get_name (Character* data) {
    if(NULL == data) {
        return -1;
    }
    std::cout << "Pick character name: " << std::endl;
    std::cin >> (*data).name;
    std::cout << (*data).name <<std::endl;
    return 0;
};

int get_age (Character* data) {
     if(NULL == data) {
        return -1;
    }
    std::cout << "Pick character age: " << std::endl;
    std::cin >> (*data).age;
    std::cout << (*data).age <<std::endl;

    return 0;
};

int get_gender_from_input(Character* data) {
     if(NULL == data) {
        return -1;
    }
    std::cout << "Pick character gender: " << std::endl;

    PRINT_OPTION(FEMALE);
    PRINT_OPTION(MALE);
    
    std::cout << "Input value: " << std::endl;
    unsigned char option;

    while (true) {
        std::cin >> option;
        std::cout << option << std::endl;
        switch (option) {
            case 'f':
                return FEMALE;
            case 'm':
                return MALE;
            case '/':
                std::cout << "Exiting!" << std::endl;
                exit(-1);
            default:
                std::cout << "Invalid option: " << option << std::endl;
        }
        
    }
};

int get_role_from_input(Character* data) {
     if(NULL == data) {
        return -1;
    }
    std::cout << "Pick character role: " << std::endl;
    
    PRINT_OPTION(ARCHER);
    PRINT_OPTION(WARRIOR);
    PRINT_OPTION(MAGE);
    
    std::cout << "Input value: " << std::endl;
    unsigned char option;

    while (true) {
        std::cin >> option;
        std::cout << option << std::endl;
        
        switch (option) {
            case 'a' :
                return ARCHER ;
            case 'w' :
                return WARRIOR;
             case 'm' :
                return MAGE;    
            case '/':
                std::cout << "Exiting!" << std::endl;
                exit(-1);
            default:
                std::cout << "Invalid option: " << option << std::endl;
        }
        
    }
}
int get_race_from_input(Character* data) {
     if(NULL == data) {
        return -1;
    }
    std::cout << "Pick character race: " << std::endl;
    
    PRINT_OPTION(ORC);
    PRINT_OPTION(HUMAN);
    PRINT_OPTION(ELF);
    
    std::cout << "Input value: " << std::endl;
    unsigned char option;

    while (true) {
        std::cin >> option;
        std::cout << option << std::endl;
        
        switch (option) {
            case 'o' :
                return ORC;
            case 'h' :
                return HUMAN;
             case 'e' :
                return ELF;    
            case '/':
                std::cout << "Exiting!" << std::endl;
                exit(-1);
            default:
                std::cout << "Invalid option: " << option << std::endl;
        }
    }
}

int main()
{
    int ret = 0;
    
    Character* hero = create_character();

    ret = get_age(hero);
    if (0 != ret ) { std::cout << "Woops!" << std::endl; }
    
    ret = get_name(hero);
    if (0 != ret ) { std::cout << "Woops!" << std::endl; }
    
    ret = get_race_from_input(hero);
    if (0 != ret ) { std::cout << "Woops!" << std::endl; }
    
    ret = get_role_from_input(hero);
    if (0 != ret ) { std::cout << "Woops!" << std::endl; }
    
    remove_character(hero);
    return  0;
   
}    
    
   
  