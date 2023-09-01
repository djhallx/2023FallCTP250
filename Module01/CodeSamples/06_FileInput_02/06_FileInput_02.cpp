// 06_FileInput_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::cout << "06_FileInput_02\n";


    ifstream inFS;   // Input file stream
    int fileNum;     // File data

    const string filename = "myfile.txt";

    // Open file
    cout << "Opening file " << filename << "." << endl;
    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "Could not open file " << filename << "." << endl;
        return 1;
    }

    // Print read numbers to output
    cout << "Reading and printing numbers." << endl;

    int sum = 0;

    inFS >> fileNum;
    while (!inFS.fail()) {
        sum += fileNum;
        cout << "num: " << fileNum << "      sum: " << sum << endl;
       
        inFS >> fileNum;
    }
    if (!inFS.eof()) {
        cout << "Input failure before reaching end of file." << endl;
    }

    cout << "Closing file " << filename << "." << endl;

    // Done with file, so close it
    inFS.close();

    return 0;
}
