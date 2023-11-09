// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/8/2023
// This program tells calculates the
// sum of the number inputted by the user.

#include <string>
#include <iostream>

int main() {
    // Declaring variables.
    std::string userNumberAsString;

    // Initializing variables for counter and factorial to 1.
    int counter = 1;
    int factorial = 1;

    // Explaining the program to the user.
    std::cout << "My program will calculate the factorial of \n";
    std::cout << " the positive integer that is inputted.\n";

    // Getting user input.
    std::cout
        << "Enter a positive integer: ";
    std::cin >> userNumberAsString;

    // Initiating try-catch.
    try {
        // Converting user input from a
        // string to an integer.
        int userNumberAsInteger = std::stoi(userNumberAsString);

        float userNumberAsFloat = std::stof(userNumberAsString);

        // If user number is a decimal.
        if (userNumberAsFloat != userNumberAsInteger) {
            std::cout << "Invalid input.";

            // Else if the user number is not positive.
        } else if (userNumberAsInteger < 0) {
                std::cout << "The integer " << userNumberAsInteger;
                std::cout << "is not positive.";
            } else {
                // Initiating a do-while loop.
                do {
                    // Display to the user the
                    // times tracking through the loop.
                    std::cout << "Tracking " << counter
                    << " times through the loop\n";

                    // Multiply the factorial by the counter.
                    factorial = factorial * counter;

                    // Increment the counter by 1 each time.
                    counter = counter + 1;
                } while (counter <= userNumberAsInteger);  // End of the loop.

                // Display the factorial of the input number.
                std::cout << "The factorial of your number is: " << factorial;
            }
        }
        catch (std::invalid_argument) {
            std::cout << "Invalid input.";
        }
}
