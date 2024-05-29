#ifndef CALCULATOR_H
#define CALCULATOR_H

template <typename T>
class Calculator {
private:
    T value;

public:
    T add(T a, T b);
    T sub(T a, T b);
    T mult(T a, T b);
    T div(T a, T b);
};


#endif
