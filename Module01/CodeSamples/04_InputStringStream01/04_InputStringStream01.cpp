// InputStringStream01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;



int main()
{
    std::cout << "Input String Stream Demonstration.\n";

    string  userInfo = "Amy Smith 19"; // Input string
    istringstream inSS(userInfo);      // Input string stream

    string firstName;                  // First name   
    string lastName;                   // Last name
    int userAge;                       // Age

    // Parse name and age values from input string
    inSS >> firstName;
    inSS >> lastName;
    inSS >> userAge;


    // Output parsed values
    cout << "First name: " << firstName << endl;
    cout << "Last  name: " << lastName << endl;
    cout << "Age: " << userAge << endl;

    return 0;

}

