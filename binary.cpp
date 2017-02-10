/*
 *  Patricia Figueroa
 *  CSCI 2525 Assembly Language PA#1
 *  Write a C++ function that receives an unsigned integer and returns its binary value.
 *  This code will be submitted on Canvas and run in the Visual Studios environment.
 *  Remember to comment your code.
 *  Do not use any using statements (i.e. using namespace std).
 */



#include <iostream>

void binarynum(int);
int main() {
    int number;

    std::cout << "Please enter a positive integer: ";
    std::cin >> number;
    if (number < 0)
        std::cout << "The number you entered is not a positive integer.\n";
    else {
        std::cout << number << " the number converted to binary is: ";
        binarynum(number);
        std::cout << std::endl;
    }
    return 0;
}

void binarynum(int number) {
    int remainder;

    if(number <= 1) {
        std::cout << number;
        return;
    }

    remainder = number%2;
    binarynum(number >> 1);
    std::cout << remainder;
}

