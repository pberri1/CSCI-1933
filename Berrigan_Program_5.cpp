// Patrick Berrigan
// CSCI 193 M02
// Program 5: This program will calculate miles per gallon

#include <iostream>
using namespace std;

int main()
{
    // Variable Declaration
    double Miles, Gallons, MpG;

    // Input
    cout << "This Program will calculate you vehicle's average Miles per Gallon. \n";
    cout << "Enter the number of Gallons you vehicle's tank can hold, \nfollowed by the number of Miles it can drive on a full tank: ";
    cin >> Gallons >> Miles;

    // Processing
    MpG = Miles / Gallons;

    // Output
    cout << "The number of Miles you entered: " << Miles << endl;
    cout << "The number of Gallons you entered: " << Gallons << endl;
    cout << "Your vehicle's Miles per Gallon is " << MpG << "." << endl;

    return 0;
}
