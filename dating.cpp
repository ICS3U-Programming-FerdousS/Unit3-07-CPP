// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 5, 2022
// This program asks the user for their age
// then check if are older than 25 and
// younger than 40 years of age and tell them if
// they can date or not


#include <iostream>
// import string
#include <string>


int main() {
  // variables for user input
  std::string age_as_string;
  int age_as_integer;
  
  // asking users for their age
  std::cout << "Enter you age ";
  std::cin >> age_as_string;
  
  
  try {
        age_as_integer = std::stoi(age_as_string);
    } 
  catch (std::invalid_argument) {
    std::cout <<"input was not an integer" << std::endl;
  }
  // check if the user is older than 25 and younger
  // than 40 years of age
  if (age_as_integer  > 25 && age_as_integer < 40) {
      std::cout << "You can date the grandchild." << std::endl;
     
  }
  // check if the user is older than 40 and younger
  // than 25 years of age
  if (age_as_integer < 25){
      std::cout << "You are too younger date the grandchild."
      << std::endl;
    if (age_as_integer > 40){
        std::cout << "You are too old date the grandchild." 
        << std::endl;
      }
  }
}
