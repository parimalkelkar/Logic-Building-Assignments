////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and position from user and OFF the bit at
//               that position. Return the modified number.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: OffBit()
//  Description:  Accepts a number and position from user and OFF the bit at that
//                position. Return the modified number.
//  Input: unsigned int, unsigned int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iRes = 0;

    // Filter
    if((iPos <=0) || (iPos > 32))
    {
        return -1;
    }

    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iRes = iNo & iMask;

    return iRes;
}



int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the location: ");
    scanf("%u", &iLocation);

    iRet = OffBit(iValue, iLocation);

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