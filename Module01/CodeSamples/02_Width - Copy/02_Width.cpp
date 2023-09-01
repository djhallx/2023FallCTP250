// Width.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "iomanip width." << endl << endl;

    char fillchar = '*';

    
    cout << "|";
    cout << 100;
    cout << "|" << '\n';
    cout << "  -- No width specified" << endl << endl;


    cout << " 12345678901234567801234567890" << endl;
    cout << "|";
    cout.width(10);                     // cout.width(x) sets the width on the next output. In this case, 100.
    cout << 100;
    cout.width(1);
    cout << "|" << '\n';
    cout << "  -- width(10)" << endl << endl;


    cout << " 12345678901234567801234567890" << endl << "|";
    cout.fill(fillchar);
    cout.width(15);
    cout << std::left << 100 << "|" << '\n';
    cout << "  -- fill(" << fillchar << ")" << endl;
    cout << "  -- width(15)" << endl << endl;


    cout << "|         1|         2|         3|         4|" << endl
         << "|1234567890|1234567890|1234567890|1234567890|" << endl
         << "---------------------------------------------" << endl;
    cout.fill(fillchar);
    cout << "|" << right << setw(10) << 123.456;
    cout << "|" << setw(10) << 123.456;
    cout << "|" << right << setw(10) << 123.456;
    cout << "|" << left  << setw(10) << 123.456
         << "|" << endl << endl;



    return 0;
}



