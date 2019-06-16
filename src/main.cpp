//
//  main.cpp
//

#include "Rational.h"

int main(int argc, const char * argv[]) {
    
    Rational numA (2, -3);
    Rational numB (-1, 2);
    
    Rational add = numA + numB;
    Rational sub = numA - numB;
    Rational mul = numA * numB;
    Rational div = numA / numB;

    std::cout << "numA = ";
    numA.print();
    std::cout << "numA (as float) = ";
    numA.printAsFloat();
    
    std::cout << "numB = ";
    numB.print();
    std::cout << "numB (as float) = ";
    numB.printAsFloat();
    
    std::cout << "numA + numB = ";
    add.print();
    std::cout << "numA + numB (as float) = ";
    add.printAsFloat();
    
    std::cout << "numA - numB = ";
    sub.print();
    std::cout << "numA - numB (as float) = ";
    sub.printAsFloat();
    
    std::cout << "numA * numB = ";
    mul.print();
    std::cout << "numA * numB (as float) = ";
    mul.printAsFloat();
    
    std::cout << "numA / numB = ";
    div.print();
    std::cout << "numA / numB (as float) = ";
    div.printAsFloat();
    
    return 0;
}
