#include <iostream>
#include "Shell.h"

int main() {
    Shell shell;

    std::cout << std::endl;
    std::cout << "L to Load" << std::endl;
    std::cout << "F to Fire" << std::endl;
    std::cout << "# 0-90 for Firing Angle" << std::endl;
    std::cout << std::endl;
    std::cout << "       / /         " << std::endl;
    std::cout << "      / /          " << std::endl;
    std::cout << "_____/ /___________" << std::endl;
    std::cout << "|   / /           |" << std::endl;
    std::cout << "|  / /   *     *  |" << std::endl;
    std::cout << "| / /=  /|\\   *** |" << std::endl;
    std::cout << "|/ /    / \\  *****|" << std::endl;
    std::cout << std::endl;

    shell.fire();

    return 0;
}