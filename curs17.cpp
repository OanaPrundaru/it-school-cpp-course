// vector<int> getCharHistogram(const string& data)
// foloseste vector pentru a stoca numarul de aparitii unui anumit caracter dintr-un string
// foloseste codul decimal al caracterului ca index in vector (static_cast<unsigned int>())
// tabela de ascii pentru utf8 are 256 caractere => initializeaza

// void printCharHistogram(const vector<int>& data)
// printeaza count-ul pentru caracterele intre a-z si A-Z care este != 0w



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