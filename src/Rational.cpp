//
//  Rational.cpp
//

#include "Rational.h"

namespace {
    int findGcd(const int a, const int b) {
        if (b == 0)
            return a;
        return findGcd(b, a % b);
    }
}

Rational::Rational(const int numerator, const int denominator)
    : m_numerator(numerator)
    , m_denominator(denominator) {
        _reduce();
}

const Rational Rational::operator+(const Rational& other) {
        const auto numerator = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
        const auto denominator = m_denominator * other.m_denominator;
        return Rational(numerator, denominator);
}

const Rational Rational::operator-(const Rational& other){
        const auto numerator = m_numerator * other.m_denominator - other.m_numerator * m_denominator;
        const auto denominator = m_denominator * other.m_denominator;
        return Rational(numerator, denominator);
}

const Rational Rational::operator*(const Rational& other) {
        const auto numerator = m_numerator * other.m_numerator;
        const auto denominator = m_denominator * other.m_denominator;
        return Rational(numerator, denominator);
}

const Rational Rational::operator/(const Rational& other) {
        const auto numerator = m_numerator * other.m_denominator;
        const auto denominator = m_denominator * other.m_numerator;
        return Rational(numerator, denominator);
}
    
void Rational::print() {
        std::cout << m_numerator;
        if(m_denominator != 1){
            std::cout << "/" << m_denominator;
        }
        std::cout << std::endl;
}

void Rational::printAsFloat() {
        std::cout << m_numerator * 1.0 / m_denominator << std::endl;
}

void Rational::_reduce() {
        auto gcd = findGcd(m_numerator, m_denominator);
        if(gcd == 1) {
            return;
        }
        m_numerator /= gcd;
        m_denominator /= gcd;
        
        if(m_denominator < 0){
            m_numerator *= -1;
            m_denominator *= -1;
        }
}

