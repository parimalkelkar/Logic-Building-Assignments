////////////////////////////////////////////////////////////////////////////////
//
//  File name: program5.cpp
//  Description: A generic program used to accept N values and return the smallest value.
//  Author: Parimal Kelkar
//  Date: 20/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>

T Min(T *arr, int iSize)
{
    T tMin = 0;
    int iCnt = 0;

    // Filter
    if(iSize < 0)
    {
        printf("Invalid input.");
        return -1;
    }

    tMin = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < tMin)
        {
            tMin = arr[iCnt];
        }
    }

    return tMin;
}

int main()
{
    int iSize = 0, iCnt = 0;

    int *iPtr = NULL, iRet = 0;

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

    iRet = Min(iPtr, iSize);
    cout << "Smallest element of an integer array is:" << iRet << "\n\n";

    delete[] iPtr;

////////////////////////////////////////////////////////////////////////////////

    float *fPtr = NULL, fRet = 0;

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

    fRet = Min(fPtr, iSize);
    cout << "Smallest element of a float array is:" << fRet << "\n\n";

    delete[] fPtr;

    return 0;
}