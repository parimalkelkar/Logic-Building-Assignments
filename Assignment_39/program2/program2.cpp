////////////////////////////////////////////////////////////////////////////////
//
//  File name: program2.cpp
//  Description: A generic program used to accept N values and count frequency of any specifc value from them.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T tValue)
{
    int iCnt = 0, iCount = 0;

    // Filter
    if(iSize < 0)
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == tValue)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;

    int *iPtr = NULL, iValue = 0;

    cout << "Enter number of elements of an integer array: ";
    cin >> iSize;

    iPtr = new int[iSize];

    if(NULL == iPtr)
    {
        cout << "Unable to allocate memory.\n";
        return -1;
    }

    cout << "Enter " << iSize << " elements:\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "\nEnter element " << (iCnt + 1) << ": ";
        cin >> iPtr[iCnt];
    }

    cout << "Enter a value to check frequency of: ";
    cin >> iValue;

    iRet = Frequency(iPtr, iSize, iValue);

    if(-1 == iRet)
    {
        cout << "\nInvalid input.\n";
    }
    else if(0 == iRet)
    {
        cout << "\nThe number " << iValue << " is not present in the array.\n\n";       
    }
    else
    {
        cout << "\nThe number " << iValue << " found for " << iRet << " times.\n\n";
    }

    delete[] iPtr;

////////////////////////////////////////////////////////////////////////////////

    float *fPtr = NULL, fValue = 0.0f;

    cout << "Enter number of elements of a float array:";
    cin >> iSize;

    fPtr = new float[iSize];

    if(NULL == fPtr)
    {
        cout << "Unable to allocate memory.\n";
        return -1;
    }

    cout << "Enter " << iSize << " elements:\n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "\nEnter element " << (iCnt + 1) << ": ";
        cin >> fPtr[iCnt];
    }

    cout << "Enter a value to check frequency of: ";
    cin >> fValue;

    iRet = Frequency(fPtr, iSize, fValue);

    if(-1 == iRet)
    {
        cout << "\nInvalid input.\n\n";
    }
    else if(0 == iRet)
    {
        cout << "\nThe number " << fValue << " is not present in the array.\n\n";       
    }
    else
    {
        cout << "\nThe number " << fValue << " found for " << iRet << " times.\n\n";
    }

    delete[] fPtr;

    return 0;
}