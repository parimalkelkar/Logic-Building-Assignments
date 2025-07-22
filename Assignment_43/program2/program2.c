////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and return the largest digit recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Max()
//  Description: Accepts a number and returns the largest digit recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Max(int iNo)
{
    static int iMax = -1;
    int iDigit = 0;

    // Updator
    // Though it will be checked in each recursion, it will ensure at first check that next subsequent stack calls are valid for purpose.
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo != 0)
    {
        iDigit = (iNo % 10);

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("The largest digit is: %d\n", iRet);

    return 0;
}