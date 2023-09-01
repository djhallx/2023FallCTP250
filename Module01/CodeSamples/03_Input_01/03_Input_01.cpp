// 03_Input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    std::cout << "Input Demonstration\n";


    string name, street, city, state, zipCode;

    cout << "Enter your name: ";
    getline(cin, name);


    cout << "Enter your street address: ";
    getline(cin, street);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your state: ";
    getline(cin, state);

    cout << "Enter your ZIP code: ";
    cin >> zipCode;

    cout << "Thank you." << endl << endl;
    
    cout << "You live at:" << endl << endl;

    cout << name << endl
        << street << endl
        << city << ", " << state << " " << zipCode << endl << endl;

    return 0;
}
