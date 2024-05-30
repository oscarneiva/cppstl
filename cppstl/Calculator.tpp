// Calculator.tpp

#include "Calculator.h"

template <typename T>
T Calculator<T>::add(T a, T b) {
    return a + b;
}

template <typename T>
T Calculator<T>::sub(T a, T b) {
    return a - b;
}

template <typename T>
T Calculator<T>::mult(T a, T b) {
    return a * b;
}

template <typename T>
T Calculator<T>::div(T a, T b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    return a / b;
}
