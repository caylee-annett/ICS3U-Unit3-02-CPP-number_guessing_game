// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program is a game where the user tries to guess the correct number

#include <iostream>

int main() {
    // This function tells the user if their guess is correct
    const int CORRECT_NUMBER = 6;
    int guessedNumber;

    // Input
    std::cout << "Guess what my number between 0 and 10 is: ";
    std::cin >> guessedNumber;
    std::cout << "" << std::endl;

    // Process & Output
    if (guessedNumber == CORRECT_NUMBER) {
            std::cout << "You guessed it!" << std::endl;
    }
    if (guessedNumber != CORRECT_NUMBER) {
                std::cout << "Wrong number!" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
