////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number and return the smallest digit recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Min()
//  Description: Accepts a number and returns the smallest digit recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Min(int iNo)
{
    static int iMin = 10;
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

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("The smallest digit is: %d\n", iRet);

    return 0;
}