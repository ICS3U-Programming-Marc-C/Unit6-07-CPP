// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: June 2022
// This program generates 10 random
// numbers and display the smallest

// Including modules
#include <time.h>
#include <iostream>
#include <list>
using std::string;


// Defining the function for the parsing
void DisplayWordsWithoutSpaces(std::string aString) {
    std::string word = "";
    for (auto iter : aString) {
        if (iter == ' ') {
            std::cout << word << "\n";
            word = "";
        } else {
            word = word + iter;
        }
    }
    std::cout << word << "\n";
}

// Defining the main function
int main() {
       // Defining the variable
       std::string userInput;

       // Getting user input
       std::cout << "Enter a sentence: ";
       std::getline(std::cin, userInput);

       // Calling the function
       DisplayWordsWithoutSpaces(userInput);
}
