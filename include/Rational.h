//
//  Rational.h
//

#ifndef Rational_h
#define Rational_h

#include <iostream>
#include <stdio.h>

class Rational {
public:
    Rational(const int numerator = 0, const int denominator = 1);
    
    const Rational operator+(const Rational& other);
    const Rational operator-(const Rational& other);
    const Rational operator*(const Rational& other);
    const Rational operator/(const Rational& other);
    
    void print();
    void printAsFloat();

private:
    void _reduce();

    int m_numerator;
    int m_denominator;
};

#endif /* Rational_h */
