// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "calculator.h"
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    calculate(num1, num2, op);
    return 0;
}

