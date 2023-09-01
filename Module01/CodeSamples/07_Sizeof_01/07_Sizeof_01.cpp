// 07_Sizeof_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    std::cout << "07_Sizeof_01.cpp\n";

    bool vBoo = true;
    
    char vChar = 'a';
    signed char vSChar = 'b';
    unsigned char vUSChar = 'c';

    short vShort = 32767;
    int vInt = 2147483647;
        // 2,147,483,647
    long vLong = 2147483647;

    unsigned short vUShort = 65535;
    unsigned int vUInt = 21;
    unsigned long vULong = 4294967295;
        // Maximum size:   4,294,967,295

    float vFloat = 23.45f;
    double vDouble = 234234.234234;
    long double vLDouble = 45345345345345435.354345;

    const int field01 = 20;
    const int field02 = 10;
    const int field03 = 20;

    cout << setw(field01) << "char:" << setw(field02) << sizeof(vChar) << setw(field03) << vChar << "  +1 = " << (char)(vChar + 1) << endl;
    cout << setw(field01) << "signed char:" << setw(field02) << sizeof(vSChar) << setw(field03) << vSChar << " + 1 = " << (char)(vSChar + 1) << endl;
    cout << setw(field01) << "unsigned char:" << setw(field02) << sizeof(vUSChar) << setw(field03) << vUSChar << "  +1 = " << (char)(vUSChar + 1) << endl;
    cout << setw(field01) << "short:" << setw(field02) << sizeof(vShort) << setw(field03) << vShort << "  +1 = " << (short)(vShort + 1) << endl;
    cout << setw(field01) << "int:" << setw(field02) << sizeof(vInt) << setw(field03) << vInt << "  +1 = " << (int)(vInt + 1) << endl;
    cout << setw(field01) << "long:" << setw(field02) << sizeof(vLong) << setw(field03) << vLong << "  +1 = " << (long)(vLong + 1) << endl;
    cout << setw(field01) << "unsigned short:" << setw(field02) << sizeof(vUShort) << setw(field03) << vUShort << "  +1 = " << (unsigned short)(vUShort + 1) << endl;
    cout << setw(field01) << "unsigned int:" << setw(field02) << sizeof(vUInt) << setw(field03) << vUInt << "  +1 = " << (unsigned int)(vUInt + 1) << endl;
    cout << setw(field01) << "unsigned long:" << setw(field02) << sizeof(vULong) << setw(field03) << vULong << "  +1 = " << (unsigned long)(vULong+1) << endl;
    cout << setw(field01) << "float:" << setw(field02) << sizeof(vFloat) << setw(field03) << vFloat  << endl;
    cout << setw(field01) << "fouble:" << setw(field02) << sizeof(vDouble) << setw(field03) << vDouble << endl;
    cout << setw(field01) << "long double:" << setw(field02) << sizeof(vLDouble) << setw(field03) << vLDouble << endl;

    /*
    unsigned short s = 65530;
    for (int i = 0; i < 100; i ++) {
        cout << "s = " << s << endl;
        s++;
    }
    */
    


}
