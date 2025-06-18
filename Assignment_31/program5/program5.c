////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number from user and ON its first 4 bits. Return the modified number.
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: OnBit()
//  Description:  Accepts a number from user and ON its first 4 bits. Return the modified number.
//  Input: unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 0x0000000F;

    iRes = iNo | iMask;

    return iRes;
}



int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = OnBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}