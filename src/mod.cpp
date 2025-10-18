#include "../include/calculator.h"
#include <iostream>
#include <stdexcept>

float Mod(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("first number must not be zero.");
    }
    return static_cast<float>(a) % b;
}