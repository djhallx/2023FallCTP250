// 08_string_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
    std::cout << "08_string_01.cpp\n";


    //------------------------------------------------------
    // Instantiating string objects.
    string s1("ABC DEF GHI");

    string s2 = "JKL";


    //------------------------------------------------------
    // Creating a new string, s3, by extracting characters
    // from a source string, s1.
    string s3(s1, 4, 3);

    cout << "s1 <" << s1 << ">" << endl;
    cout << "s2 <" << s2 << ">" << endl;
    cout << "s3 <" << s3 << ">" << endl;


    //------------------------------------------------------
    // Using '+' to concatenate strings.
    string s4 = s2 + " " + s3;
    cout << "s4 <" << s4 << ">" << endl;


    //------------------------------------------------------
    // Iterating over the characters in a string using []
    string s5;

    for (int i = 0; i < s1.length(); i++) {
        cout << "<" << s1[i] << "> ";
        
        // Append s1[i] to s5.
        s5 += s1[i];
    }
    cout << endl;

    cout << "s5 <" << s5 << ">" << endl;


    //------------------------------------------------------
    // Comparing two string using '<'.
    string s6 = "AAA";
    string s7 = "ZZZ";

    if (s6 < s7) {
        cout << "s6 < s7:   " << s6 << " < " << s7 << endl;
    }
    else {
        cout << "s6 >= s7:   " << s6 << " >= " << s7 << endl;
    }

    //------------------------------------------------------
    // Comparing two string using '>'.
    if (s7 > s6) {
        cout << "s7 > s6:   " << s7 << " > " << s6 << endl;
    }
    else {
        cout << "s7 <= s6:   " << s7 << " <= " << s6 << endl;
    }

    //------------------------------------------------------
    // Comparing two string using '=='.
    string s8 = "DDD";
    string s9 = "DDD";
    if (s8 == s9) {
        cout << "s8 == s9:   " << s8 << " == " << s9 << endl;
    }
    else {
        cout << "s8 != s9:   " << s8 << " != " << s9 << endl;
    }

    cout << endl << endl << endl;

    //------------------------------------------------------
    // string.append(...)
    string s10 = "ABC";
    string s11 = "DEF";

    cout << "s10 = <" << s10 << "> Before call to s10.append(...)" << endl;
    
    string s12 = s10.append(s11);
    cout << "s10 = <" << s10 << "> After call to s10.append(...)" << endl;
    cout << "s11 = <" << s11 << ">" << endl;
    cout << "s10.append(s11) = <" << s12 << ">" << endl;

    //------------------------------------------------------
    // string.append(src, startIndex, takeCount)
    string s13 = "ABC";
    string s14 = "DEF GHI JKL MNO";
    cout << "s13 = <" << s13 << ">" << endl;
    cout << "s14 = <" << s14 << ">" << endl;

    int startIndex = 3; // Zero-based index into the string.
    int takeCount = 11;
    string s15 = s13.append(s14, startIndex, takeCount);        
    
    cout << "s13.append(s14) = <" << s15 << ">" << endl;
    
    cout << endl << endl;

    //------------------------------------------------------
    // string.assign(otherString)
    string s16 = "ABCDEF";
    cout << "s16 = <" << s16 << ">" << endl;

    string s17 = "GHIJKL";
    cout << "s17 = <" << s17 << "> Before 'assign(s16)'" << endl;

    s17.assign(s16);
    cout << "s17 = <" << s17 << "> After 'assign(s16)'" << endl;


    cout << endl << endl;

    //------------------------------------------------------
    // string.find(otherString)
    string s18    = "ABC DEF GHI JKL MNO PQR STU WXYZ";
    string s18i12 = "            ^^^";
    string s19 = "JKL";
    int findIndex = (int)s18.find(s19);
    cout << "       0123456789012345678901234567890" << endl;
    cout << "s18 = <" << s18 << ">" << endl;
    cout << "       " << s18i12 << endl;
    cout << "s19 = <" << s19 << ">" << endl;
    cout << "s18.find(s19) = " << findIndex << endl;


    //------------------------------------------------------
    // string.c_str()
    // A 'C' string is a null-terminated array of characters.
    const char* cptr = s18.c_str();
    cout << "*cptr: " << endl;
    while (*cptr) {
        cout << "<" << *cptr << "> ";
        cptr++;
    }

    cout << endl << endl;

    //------------------------------------------------------
    // string.length()
    cout << "s18.length() = " << s18.length() << endl;


}

