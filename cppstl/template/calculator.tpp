#ifndef CALCULATOR_TPP
#define CALCULATOR_TPP

#include "calculator.h"

template <typename T>
T calculator<T>::add(T a, T b) {
    return a + b;
}

template <typename T>
T calculator<T>::sub(T a, T b) {
    return a - b;
}

template <typename T>
T calculator<T>::mult(T a, T b) {
    return a * b;
}

template <typename T>
T calculator<T>::div(T a, T b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

#endif // CALCULATOR_TPP
