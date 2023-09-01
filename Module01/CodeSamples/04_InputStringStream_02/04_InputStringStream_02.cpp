// 04_InputStringStream_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;



int main()
{
    std::cout << "Input String Stream Demonstration.\n";

    //string  userInfo = "Amy Smith 19"; // Input string
    //istringstream inSS(userInfo);      // Input string stream

    string firstName;                  // First name   
    string lastName;                   // Last name
    int userAge;                       // Age

    string line;




    // Read lines until eof is encountered.
    // On Windows, eof is ^z
    while (getline(cin, line)) {

        // Create the istringstream from the line.
        istringstream inSS(line);

        // Parse name and age values from input string
        inSS >> firstName;
        inSS >> lastName;
        inSS >> userAge;

        // Output parsed values
        cout << "First name: " << firstName << endl;
        cout << "Last  name: " << lastName << endl;
        cout << "Age: " << userAge << endl << endl;

    }
    cout << "EOF encountered." << endl;

    return 0;

}