////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number and return its reverse number recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Reverse()
//  Description: Accepts a number and returns its reverse number recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    static int iRev = 0;
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

        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;

        Reverse(iNo);
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Its reverse number is: %d\n", iRet);

    return 0;
}