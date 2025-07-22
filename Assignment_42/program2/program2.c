////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and perform the sum of its digits recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Sum()
//  Description: Accepts a number and performs the sum of its digits recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = (iNo % 10);
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("The sum of its digits is: %d\n", iRet);

    return 0;
}