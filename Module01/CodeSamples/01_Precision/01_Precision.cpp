// Manipulators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    cout << "iomanip precision.\n";

    //int defaultPrecision = 7;
    //std::cout.precision(defaultPrecision);


    double value1 = 1234.234234234;
    cout << "value1:     " << value1 << endl;
    cout << "  -- Default precision is 6" << endl << endl;


    cout << "value1:     " << setprecision(2) << value1 << endl;
    cout << "            x.x" << endl;
    cout << "  -- setprecision(2). " << endl << endl;

    cout << "value1:     " << setprecision(3) << value1 << endl;
    cout << "            x.xx" << endl;
    cout << "  -- setprecision(3). " << endl << endl;

    cout << "value1:     " << setprecision(4) << value1 << endl;
    cout << "            xxxx" << endl;
    cout << "  -- setprecision(4). " << endl << endl;

    cout << "value1:     " << setprecision(5) << value1 << endl;
    cout << "            xxxx.x" << endl;
    cout << "  -- setprecision(5). " << endl << endl;

    cout << "value1:     " << setprecision(6) << value1 << endl;
    cout << "            xxxx.xx" << endl;
    cout << "  -- setprecision(6). " << endl << endl;



    cout << "value1:     " << fixed << value1 << endl;
    cout << "  -- fixed. " << endl << endl;


    // Fixed should come before setprecision.
    cout << "                 vvvv  <-- When used after 'fixed', setprecision(4) refers to these 4 digits." << endl;
    cout << "value1:     " << fixed << setprecision(4) << value1 << endl;
    cout << "  -- fixed. " << endl;
    cout << "  -- setprecision(4). " << endl << endl;

    cout << "                 vvv  <-- When used after 'fixed', setprecision(3) refers to these 3 digits." << endl;
    cout << "value1:     " << fixed << setprecision(3) << value1 << endl;
    cout << "  -- fixed. " << endl;
    cout << "  -- setprecision(3). " << endl << endl;


    cout << "value1:     " << scientific << value1 << endl;
    cout << "  -- scientific. " << endl << endl;



}

