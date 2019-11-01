// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program is a number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // This function checks if the entered number is the same as random number
    std::string number_str;
    int number;
    int random;
    srand(time(0));  // seed random number generator
    random = rand() % 100000 + 1;  // random number between 1 and 10
    // These 2 last codes are from cppforschool.com

    // Input, Process and Output
    while (true) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> number_str;
        try {
            number = std::stoi(number_str);
            if (number == random) {
                std::cout << "You Won!" << std::endl;
                break;
            } else if (number > random) {
                std::cout << "my number is lower than yours" << std::endl;
            } else if (number < random) {
                std::cout << "my number is higher than yours" << std::endl;
            } else {
                // I dont think that you should be here
        }
        } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
         }
    }
}
