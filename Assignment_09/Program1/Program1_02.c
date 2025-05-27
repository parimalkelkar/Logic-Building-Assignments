////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and display its digits in reverse.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: RevDigit()
//  Description: Accepts a number and display its digits in reverse.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int RevDigit(int iNo)
{
    int iDigit = 0, iRev = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = RevDigit(iValue);

    printf("Reverse of a number is: %d\n", iRet);

    return 0;
}