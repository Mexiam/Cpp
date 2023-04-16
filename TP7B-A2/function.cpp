#include <iostream>
#include<vector>
#include <cstring>
#define boolToString(b) (b ? "true" : "false")
#include "function.h"

template<typename T> void printVector(std::vector<T> numbers){
    std::cout << "[";
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        if(it == numbers.end()-1){
            std::cout << *it;
        }else {
            std::cout << *it << ",";
        }
    }
    std::cout << "]" << std::endl;
}

void printNumbers(){
    std::vector<int> numbers = {1,2,3};
    printVector(numbers);
}

void printLetters(){
    std::vector<char> letters = {'A', 'B', 'C'};
    printVector(letters);
}

void printVectorTest(){
    printNumbers();
    printLetters();
}

void isNumberTests(){
    std::cout << boolToString( isNumber("1") )<< std::endl;
    std::cout << boolToString( isNumber("42") ) << std::endl;
    std::cout << boolToString( isNumber("6PO") ) << std::endl;
    std::cout << boolToString( isNumber("R2D2") ) << std::endl;
}
bool isNumber(std::string a){
    for(int i=0; i<a.size(); i++){
        if(std::isalpha(a[i])){
            return false;
        }
    }
    return true;
}

void filterVectorTest(){
    std::vector<std::string> values = {"Z", "1", "A", "42", "E", "G", "0"};
    keepNumbersOnly(values);
    printVector(values);
}

void keepNumbersOnly(std::vector<std::string>& a){
    for (auto it = a.begin(); it != a.end(); it++) {
        if(isNumber(*it)==false){
            a.erase(it);
            it--;
        }
    }
}

void splitTests(){
    std::vector<std::string> operators = splitString("+ - / =");
    printVector(operators);
    std::vector<std::string> numbers = splitString("1,2,3,4,5", ',');
    printVector(numbers);
    std::vector<std::string> letters = splitString("A-B-C-D", '-');
    printVector(letters);
}

std::vector<std::string> splitString(std::string a, char b){
    std::vector<std::string> r;
    while(a.find(b) != std::string::npos){
        std::string temp = a.substr(0,a.find(b));
        r.push_back(temp);
        a = a.substr(a.find(b)+1);
    }
    r.push_back(a);
    return r;
}

void printAges(){
    map</*name*/string, /*age*/unsigned short> ages = {
            { "Emma", 30 },
            { "Manon", 19 },
            { "Sacha", 45 }
    };
    printMap(ages);
}
void printMap(){

}