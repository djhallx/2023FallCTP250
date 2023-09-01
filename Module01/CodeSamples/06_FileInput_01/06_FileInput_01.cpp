// 06_TestProject_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::cout << "06_FileInput_01\n";

    ifstream inFS;     // Input file stream
    int fileNum1;      // Data value from file
    int fileNum2;      // Data value from file

    const string filename = "numFile.txt";

    // Try to open file
    cout << "Opening file " << filename  << "..." << endl;

    inFS.open(filename);
    if (!inFS.is_open()) {
        cerr << "Could not open file " << filename << "." << endl;
        return 1; // 1 indicates error
    }

    // Can now use inFS stream like cin stream
    // numFile.txt should contain two integers, else problems
    cout << "Reading two integers." << endl;
    inFS >> fileNum1;
    inFS >> fileNum2;
    cout << "Closing file " << filename << "." << endl;
    inFS.close(); // Done with file, so close it

    // Output values read from file
    cout << "num1: " << fileNum1 << endl;
    cout << "num2: " << fileNum2 << endl;
    cout << "num1 + num2: " << (fileNum1 + fileNum2) << endl;

    return 0;
}
