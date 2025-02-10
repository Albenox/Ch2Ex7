/*
    Program File Name: Ch2Ex7.cpp
    Programmer: Gabriel Inocentes
    Date: February 9, 2024
    Requirements:
    Display the estimated rise of the ocean level in several future years
*/

#include <iostream>
using namespace std;

const float rise = 1.5;

int main()
{
    double fiveYears = rise * 5;
    double sevenYears = rise * 7;
    double tenYears = rise * 10;

    cout << "The estimated rise of the ocean compared to today, will be " << fiveYears << "mm higher in 5 years, " << sevenYears << "mm higher in 7 years, and " << tenYears << "mm higher in 10 years.";
}
