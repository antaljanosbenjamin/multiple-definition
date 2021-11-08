#include "libB.hpp"

#include <iostream>

void NotClashingFunctionA() {
    std::cout << "Not clashing function A\n";
}

void ClashingFunction() {
    std::cout << "Clashing function A\n";
}