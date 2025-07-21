////////////////////////////////////////////////////////////////////////////////
//
//  File name: program1.cpp
//  Description: A generic program used to accept a value and a number and print that value that number of times.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
    int iCnt = 0;

    // Filter
    if(iSize < 0)
    {
        cout << "Invalid input.";
        return;
    }

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << value << " ";
    }

    cout << "\n";
}

int main()
{
    int iCount = 0;

    char cValue = '\0';

    cout << "Enter a character: ";
    cin >> cValue;

    cout << "Enter a frequency: ";
    cin >> iCount;

    Display(cValue, iCount);

////////////////////////////////////////////////////////////////////////////////

    int iValue = 0;

    cout << "Enter an integer: ";
    cin >> iValue;

    cout << "Enter a frequency: ";
    cin >> iCount;

    Display(iValue, iCount);

////////////////////////////////////////////////////////////////////////////////

    float fValue = 0.0f;

    cout << "Enter a float: ";
    cin >> fValue;

    cout << "Enter a frequency: ";
    cin >> iCount;

    Display(fValue, iCount);

    return 0;
}