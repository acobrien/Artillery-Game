//
// Created by aobri on 7/1/2025.
//

#include "Shell.h"

#include <iostream>
#include <ostream>

Shell::Shell() : mass(0), velocity(0), altitude(0) {}

void Shell::fire() {
    std::cout << "firing" << std::endl;
}
