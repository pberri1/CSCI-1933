// Berrigan, Patrick
// CSCI 1933 M02
// Program 4: This Program will calculate the subtotal, sales tax, and subtotal to display.

// Preprocessor Directive
#include <iostream>
using namespace std;

int main()
{
    // Initialization
    float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, subtotal, total;
    const float SALES_TAX = 0.07;

    // Processing
    subtotal = item1 + item2 + item3 + item4 + item5;
    total = subtotal + (SALES_TAX * subtotal);

    // Output
    cout << "$" << item1 << endl;
    cout << "$" << item2 << endl;
    cout << "$" << item3 << endl;
    cout << "$" << item4 << endl;
    cout << "$" << item5 << endl;
    cout << "$" << subtotal << endl;
    cout << "$" << (SALES_TAX * subtotal) << endl;
    cout << "$" << total << endl;

    return 0;
}
