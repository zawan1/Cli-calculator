#include "../include/calculator.h"
#include <iostream>
#include <stdexcept>

float Divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero error.");
    }
    return static_cast<float>(a)/b;//this static is changing the int into float ok?
}