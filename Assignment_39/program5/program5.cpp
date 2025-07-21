////////////////////////////////////////////////////////////////////////////////
//
//  File name: program5.cpp
//  Description: A generic program used to accept N values and reverse the contents.
//  Author: Parimal Kelkar
//  Date: 21/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    int start = 0, end = 0;
    T temp = 0;

    // Filter
    if(iSize < 0)
    {
        cout << "Invalid input.\n";
        return;
    }

    start = 0;
    end = iSize - 1;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;

    int *iPtr = NULL;

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

    cout << "The elements of an integer array before reversing are: \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << iPtr[iCnt] << "\t";
    }

    cout << "\n\n";

    Reverse(iPtr, iSize);

    cout << "The elements of an integer array after reversing are: \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << iPtr[iCnt] << "\t";
    }

    cout << "\n\n";

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

    cout << "The elements of a float array before reversing are: \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << fPtr[iCnt] << "\t";
    }

    cout << "\n\n";

    Reverse(fPtr, iSize);

    cout << "The elements of a float array after reversing are: \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << fPtr[iCnt] << "\t";
    }

    cout << "\n\n";

    delete[] fPtr;

    return 0;
}