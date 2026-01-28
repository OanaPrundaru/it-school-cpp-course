// vector<int> getCharHistogram(const string& data)
// foloseste vector pentru a stoca numarul de aparitii unui anumit caracter dintr-un string
// foloseste codul decimal al caracterului ca index in vector (static_cast<unsigned int>())
// tabela de ascii pentru utf8 are 256 caractere => initializeaza

// void printCharHistogram(const vector<int>& data)
// printeaza count-ul pentru caracterele intre a-z si A-Z care este != 0w


// HISTOGRAM

#include <iostream>
#include <map>
#include <string>
#include <vector>



std::vector<int> getCharHistogram(const std::string& data) {

    std::vector<int> histogram(256, 0);

    for (size_t i=0; i< data.size(); i++) {
        unsigned int index = static_cast<unsigned int>(data[i]);
        
        histogram[index]++;
    }

    return histogram;
}

    void printCharHistogram(const std::vector<int>& data){
        for(size_t i = 0; i < data.size(); i++){
            int count = data[i];
            if(count ==0){
                continue;
            }
            
            char letter = static_cast < char >(i);
            
            if(letter < 'A' || letter > 'z'){
                continue;
            }
            if(letter > 'Z' && letter < 'a'){
                continue;
            
    }
             std::cout << " letter " << letter << " : "<< count << std::endl;
}
}

int main() {
    std::string text = "Hello World!";
    std::vector<int> result = getCharHistogram(text);

printCharHistogram(result);
    return 0;
}



// int main()
// {
//     std::map<std::string, int> mapVariableName = {{"anotherkey", 23}};
    
//     mapVariableName["key"] = mapVariableName["key"] +1;
//     std::cout <<mapVariableName["key"] <<std::endl;
    
//     for (const auto& [key,value] : mapVariableName) {
//         std::cout << key << " : " << std::endl;
//     }
    
//     std::cout << mapVariableName.contains("222key") << std::endl;
    
//     return 0;
// }

//MAP

// #include <iostream>
// #include <map>
// #include <string>
// #include <vector>


//  std::map < char, int > mapVariableName(const std::string& data) {
    
//      std::map < char, int > mapVariableName;
     
//      for (size_t i=0; i< data.size(); i++) {
     
//         mapVariableName[data[i]]++;
//     }

//     return mapVariableName;
// }


//  void printmapVariableName(const std::map < char, int>& data){
     
//      int aux = 0;
//         for(const auto& [letter ,count]:data){
//             aux++;
//             std::cout << aux << std::endl;
//             if(count ==0){
//                 continue;
//             }
            
//            if(letter < 'A' || letter > 'z'){
//                 continue;
//             }
//             if(letter > 'Z' && letter < 'a'){
//                 continue;
            
//     }
//             std::cout << " letter : " << letter << " : "<< count << std::endl;
// }
// }

// int main() {
//     std::string text = "Hello World!";
//     std::map< char, int > result = mapVariableName(text);

// printmapVariableName(result);
//     return 0;
// }



