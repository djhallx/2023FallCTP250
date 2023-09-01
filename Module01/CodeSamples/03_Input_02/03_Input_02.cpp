// 03_Input_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void displayState(const istream& is);




int main()
{
    std::cout << "Input Demonstration #2.\n";


    char ch;
    int n;
    float f;

    cout << "Input a character: ";
    cin >> ch;
    cin.ignore(256, '\n'); // ensures only one character read
        // cin.ignore(#,ch) ignores up to number of characters you specify when you call it, up to the char you specify as a delimiter.
    
    displayState(cin);
    

    cout << "Enter a float: ";
    while (!(cin >> f))
    {
        displayState(cin);

        cout << "Must input a float\n";
        cin.clear(); // clear error flag

        cout << "state cleared." << endl;
        displayState(cin);
        cin.ignore(256, '\n'); // ignores remainder of stream
    }

    displayState(cin);


    cout << "Enter an integer: ";
    while (!(cin >> n))
    {
        displayState(cin);

        cout << "Must input an integer\n";
        cin.clear(); // clear error flag
        
        cout << "state cleared." << endl;
        displayState(cin);
        cin.ignore(256, '\n'); // ignores remainder of stream
    }
    displayState(cin);

    cout << "<" << ch << "> <" << f << "> <" << n << ">" << endl;

    return 0;
}



void displayState(const istream& is) {

    cout << "---------------------------------------" << endl;
    cout << "is state: "     << is.rdstate() << endl;
    cout << "is.good(): "    << is.good() << endl;
    cout << "is.eof(): "     << is.eof() << endl;
    cout << "is.fail(): "    << is.fail() << endl;
    cout << "is.bad(): "     << is.bad() << endl;
    cout << "is.rdstate(): " << is.rdstate() << endl;
    cout << "---------------------------------------" << endl;

}
