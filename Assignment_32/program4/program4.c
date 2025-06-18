////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number and position from user and toggle the bit
//               at that position. Return the modified number.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ToggleBit()
//  Description: Accepts a number and position from user and toggles the bit at
//               that position and returns the modified number.
//  Input: unsigned int, unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iRes = 0;

    // Filter
    if((iPos <= 0) || (iPos > 32))
    {
        return -1;
    }

    iMask = iMask << (iPos -1);

    iRes = iNo ^ iMask;

    return iRes;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the location: ");
    scanf("%u", &iLocation);

    iRet = ToggleBit(iValue, iLocation);

    if(iRet == -1)
    {
        printf("Invalid location.\n");
    }
    else
    {
        printf("Modified number is: %d\n", iRet);
    }

    return 0;
}