#include "FrequencyCounter.h"

void FrequencyCounter::readFile(string fileName){
    char character;
    ifstream inputFile;
    inputFile.open(fileName,ios::in);

    while(inputFile.get(character))
        frequencyMap[character]++;

    inputFile.close();
}

 unordered_map<char,int> &FrequencyCounter::getFrequencyMap(){
    return frequencyMap;
}