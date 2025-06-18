////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a number from user and toggle 7th bit of that number.
//               Return the modified number.
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ToggleBit()
//  Description:  Accepts a number from user and toggles 7th bit of that number
//                and returns the modified number.
//  Input: unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 0x00000040;

    iRes = iNo ^ iMask;

    return iRes;
}



int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is: %d\n", iRet);

    return 0;
}