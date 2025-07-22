////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number and return its factorial recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Fact()
//  Description: Accepts a number and returns its factorial recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        Fact(--iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("Its factorial is: %d\n", iRet);

    return 0;
}