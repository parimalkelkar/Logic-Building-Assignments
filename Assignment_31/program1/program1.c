////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number from user and OFF 7th bit of that number
//                 if it is ON. Return the modified number.
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: OffBit()
//  Description:  Accepts a number from user and OFF 7th bit of that number
//                if it is ON and returns the modified number.
//  Input: unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 0x00000040;

    iMask = ~iMask;

    iRes = iNo & iMask;

    return iRes;
}



int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}