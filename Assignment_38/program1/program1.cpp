////////////////////////////////////////////////////////////////////////////////
//
//  File name: program1.cpp
//  Description: Used to multiply two numbers generically.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    cout << iRet << "\n";

    float fRet = Multiply(10.9f, 20.0f);
    cout << fRet << "\n";

    return 0;
}