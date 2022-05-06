/******************************************************/
/* Name: Vince Bjazevic                               */
/******************************************************/

#include <fstream>
#include <iostream>
#include "strArr.hpp"
using namespace std;

StringArr::StringArr(){
    count = 0;
}

StringArr::StringArr(string filename){
    count = 0;
    readFromFile(filename);
}

bool StringArr::readFromFile(string filename){
    string input;
    ifstream inFile;
    inFile.open(filename);
    if(inFile.fail())
        return false;
    count = 0;
    while (inFile >> input) {
        WordArray[count] = input;
        count++;
    }
    return true;
}

void StringArr::print(){
    for (int i = 0; i<count; i++){
        cout << WordArray[i] << endl;
    }
}

string StringArr::shortest(){
    return "";
}

string StringArr::longest(){
    return "";
}

void StringArr::printSorted(){
    return;
}

int StringArr::longestAscending(string seq[]){
    return 0;
}

int StringArr::longestDescending(string seq[]){
    return 0;
}

void populate(string w[], int n, int counter){
    return;
}
