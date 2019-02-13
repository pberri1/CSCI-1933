// Patrick Berrigan
// CSCI 1933 M02
// Program 3: This program will produce the average of 5 values.

#include <iostream>
using namespace std;

int main()
{
    // Variable Declaration
    double num1, num2, num3, num4, num5, sum, averageValue;

    // Input
    num1 = 28;
    num2 = 32;
    num3 = 37;
    num4 = 24;
    num5 = 33;

    // Processing
    sum = num1 + num2 + num3 + num4 + num5;
    averageValue = sum / 5;

    // Output
    cout << "The average of the set of numbers: 24, 28, 32, 33, and 37 equals " << averageValue << "." << endl;

    return 0;
}
