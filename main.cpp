#include <string>
#include <iostream>
#include <unordered_map>
#include <fstream>
#include "FrequencyCounter.h"
#include "Huffman.h"
using namespace std;



//std::ifstream::pos_type filesize(const char* filename);
std::ifstream::pos_type filesize(const char* filename){
    std::ifstream in(filename,std::ifstream::ate | std::ifstream::binary);
    return in.tellg();
 }
int main(){
    FrequencyCounter frequencyCounter;
    Huffman huffman;
    string workingMode;
    cout<<"Welcome to Huffman Compressor Decompressor:\nChoose the Mode:\n1.compress\n2.decompress\n(write the mode):";
    cin>>workingMode;
    if(workingMode == "compress"){
        clock_t tstart = clock();
        frequencyCounter.readFile("input.txt");
        huffman.huffer(frequencyCounter.getFrequencyMap());
        huffman.compressToFile("input.txt","output.txt");
        cout << "Time Taken: " <<(1.0*(clock()-tstart)/CLOCKS_PER_SEC) << "sec"<<endl;
        cout << "Input File Size : "<<filesize("input.txt")<<" bytes."<<endl;
        cout<< "Compressed File Size : "<<filesize("output.txt")<<" bytes."<<endl;
        cout<< "Compression Ratio : "<<(1.0*filesize("output.txt")/filesize("input.txt"))<<endl;

    }else if(workingMode == "decompress"){
        clock_t tStart = clock();
        huffman.deHuffer("output.txt","output2.txt");
        cout <<"Time taken: "<<(1.0*(clock() - tStart)/CLOCKS_PER_SEC)<<"sec"<<endl;
        cout << "Input File (Compressed) Size : "<<filesize("output.txt")<<" bytes."<<endl;
        cout<< "DeCompressed File Size : "<<filesize("output2.txt")<<" bytes."<<endl;
    }

    return 0;
}


