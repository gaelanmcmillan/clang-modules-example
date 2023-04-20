//
// Created by Gaelan McMillan on 2023-04-20.
//
module; // Tell the compiler we have a module

#include <iostream>
#include <string>

// #includes MUST come before hello

export module hello;

export void hello(const std::string& name) {
    std::cout << "Hello " << name << '\n';
}


