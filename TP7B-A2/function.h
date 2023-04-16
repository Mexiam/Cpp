#include <iostream>
#include<vector>
#include <cctype>
#include <cstring>
void printNumbers();
void printLetters();
void printVectorTest();
template<typename T> void printVector( std::vector<T> numbers);

void isNumberTests();
bool isNumber(std::string a);
void filterVectorTest();
void keepNumbersOnly(std::vector<std::string>& a);
void splitTests();
std::vector<std::string> splitString(std::string a, char b=' ');
void printAges();
void printMap();
