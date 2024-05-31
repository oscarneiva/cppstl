#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

template <typename T>
class calculator {
private:
    T value;

public:
    T add(T a, T b);
    T sub(T a, T b);
    T mult(T a, T b);
    T div(T a, T b);
};

// Include the implementation file
#include "calculator.tpp"

#endif // CALCULATOR_H
