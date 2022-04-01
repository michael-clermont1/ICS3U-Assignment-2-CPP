// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is to calculate the surface area

#include <iostream>
#include <cmath>

int main() {
    // this function is to calculate the surface area
    int radius;
    int height;
    int surfaceArea;

    // input
    std::cout << "Enter the radius of the cylinder (mm): ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder (mm): ";
    std::cin >> height;
    std::cout << "" << std::endl;

    // process
    surfaceArea = 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2);

    // output
    std::cout << "" << std:: endl;
    std::cout << "The surface area for the cylinder with a radius of "
    << radius << " and height of " << height << " is "
    << surfaceArea << " mm²." << std::endl;
    std::cout<< "\nDone." << std::endl;
}
