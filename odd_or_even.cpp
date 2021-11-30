/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */


#include <iostream>
#include <string>

int main() {
    int input;
    std::string oddEven;
    
    // request user input
    std::cout << "Input an integer: ";
    std::cin >> input;

    // determine if input is odd or even & output
    oddEven = ((input % 2) == 0) ? "even" : "odd";
    std::cout << "The value " << input << " is an " << oddEven << " number." << std::endl;

    return 0;
}