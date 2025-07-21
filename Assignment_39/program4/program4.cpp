////////////////////////////////////////////////////////////////////////////////
//
//  File name: program4.cpp
//  Description: A generic program used to accept N values and to search the last occurrance of any specifc value in them.
//  Author: Parimal Kelkar
//  Date: 21/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T tValue)
{
    int iCnt = 0;

    // Filter
    if(iSize < 0)
    {
        return -1;
    }

    for(iCnt = (iSize - 1); iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] == tValue)
        {
            break;
        }
    }

    if(iCnt < 0)
    {
        return -2;
    }
    else
    {
        return (iCnt + 1);
    }
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

    cout << "Enter a value to search: ";
    cin >> iValue;

    iRet = SearchLast(iPtr, iSize, iValue);

    if(-1 == iRet)
    {
        cout << "\nInvalid input.\n";
    }
    else if (-2 == iRet)
    {
        cout << "\nThe number " << iValue  << " is not presnet in the array.\n\n";
    }
    else
    {
        cout << "\nThe number " << iValue << " last found at position " << iRet << ".\n\n";
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

    cout << "Enter a value to search: ";
    cin >> fValue;

    iRet = SearchLast(fPtr, iSize, fValue);

    if(-1 == iRet)
    {
        cout << "\nInvalid input.\n\n";
    }
    else if (-2 == iRet)
    {
        cout << "\nThe number " << fValue  << " is not presnet in the array.\n\n";
    }
    else
    {
        cout << "\nThe number " << fValue << " last found at position " << iRet << ".\n\n";
    }

    delete[] fPtr;

    return 0;
}