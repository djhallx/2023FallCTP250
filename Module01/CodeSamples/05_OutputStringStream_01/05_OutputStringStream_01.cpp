// 05_OutputStringStream_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ostringstream infoOSS;    // Output string stream
    string infoStr;           // Information string
    string firstName;         // First name
    string lastName;          // Last name
    int userAge;              // Age

    // Prompt user for input
    cout << "Enter \"firstname lastname age\": " << endl;
    cin >> firstName;
    cin >> lastName;
    cin >> userAge;

    // Write user input to string stream
    infoOSS << lastName << ", " << firstName;
    infoOSS << " " << userAge;

    // Appends (minor) to string stream if less than 21
    if (userAge < 21) {
        infoOSS << " (minor)";
    }

    // Extract string stream buffer as a single string
    infoStr = infoOSS.str();

    cout << "Information: " << infoStr << endl;

    return 0;
}