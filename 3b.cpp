// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program compares the value of two numbers

#include <iostream>
using namespace std;

int main() {
int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

        if (num1 == num2)
            (cout << num1 << " is equal to " << num2 << endl);
        if (num1 < num2)
            (cout << num1 << " is smaller than " << num2 << endl);
        if (num1 > num2)
            (cout << num1 << " is larger than " << num2 << endl);
}
