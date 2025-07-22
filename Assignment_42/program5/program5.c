////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number and return the product of its digits recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Mult()
//  Description: Accepts a number and returns the product of its digits recursively.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = (iNo % 10);
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("The product of its digits is: %d\n", iRet);

    return 0;
}