////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number from user and toggle the contents of first
//               and last nibble of the number. Return the modified number.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ToggleBit()
//  Description: Accepts a number from user and toggles the contents of first and
//               last nibble of the number and returns the modified number.
//  Input: unsigned int, unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 4026531855;//0xF000000F;

    iRes = iNo ^ iMask;

    return iRes;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is: %u\n", iRet);

    return 0;
}