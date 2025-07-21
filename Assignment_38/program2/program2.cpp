////////////////////////////////////////////////////////////////////////////////
//
//  File name: program2.cpp
//  Description: Used to find largest number from three numbers generically.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T iMax = 0;

    iMax = no1;

    if(no2 > iMax)
    {
        iMax = no2;
    }

    if(no3 > iMax)
    {
        iMax = no3;
    }

    return iMax;
}

int main()
{
    int iRet = Max(20, 15, 10);
    cout << "Maximum number is: " << iRet << "\n";

    float fRet = Max(35.54f, 35.56f, 35.55f);
    cout << "Maximum number is: " << fRet << "\n";

    return 0;
}