#include <string>
#include <iostream>
#include <unordered_map>
#include <fstream>

using namespace std;

#ifndef FREQUENCY_COUNTER_H
#define FREQUENCY_COUNTER_H 

class FrequencyCounter{
    unordered_map<char,int> frequencyMap;

    public:
        const unordered_map<char,int> &getFrequencyMap() const; 
        void readFile(string fileName) ;
};
#endif