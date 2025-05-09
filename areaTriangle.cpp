// Copyright (c) 2025 Angel all rights reserved
// Created by: Angel
// Created by: May 06, 2025

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate the area

    float area;  // the area will be in float

    // the program will calculate the area using the formula
    area = (base * height) / 2;

    // The program will print out the are and add the units.
    std::cout << "The area is " << area << "cm^2" << std::endl;
}

int main() {
    std::string userBaseAsString;  // get the userBase as a string
    std::string userHeightAsString;
    float userHeight;  // get the userHeight as a float
    float userBase;  // get the userBase as a float

    try {  // helps catch any errors so that the program doesn't crash.
        std::cout << "Enter the base of a triangle (cm): ";
        // asks the user to enter the base
        std::cin >> userBaseAsString;  // the program will
        // put is as the value for base
        userBase = std::stof(userBaseAsString);
        std::cout << "Enter the height of a triangle (cm): ";
        // asks the user to enter the height
        std::cin >> userHeightAsString;  // the program will put is
        //  as the value for height.
        userHeight = std::stof(userHeightAsString);

        if (userBase <= 0) {  // if the base from user is 0 or less,
            // the program will ask the user for a bigger number
            std::cout << "The base must be bigger than 0" << std::endl;
        } else if (userHeight <= 0) {  // if the height from user is 0 or less,
            // the program will ask the user for a bigger number
            std::cout << "The height must be bigger than 0" << std::endl;
        } else {
            CalculateArea(userBase, userHeight);
        }
    }
    catch (std::invalid_argument) {
        std::cout << "This is invalid!" << std::endl;
    }
}
