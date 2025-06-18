////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number, two positions from user and check whether
//               the bit at first or bit at second position is ON or OFF.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Accepts a number, two positions and checks whether the bit at
//              first or bith at second position is ON or OFF.
//  Input: unsigned int, int, int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1, iMask2 = 1, iRes1 = 0, iRes2 = 0;

    // Filter
    if(((iPos1 <= 0) || (iPos1 > 32)) || ((iPos2 <= 0) || (iPos2 > 32)))
    {
        printf("Invalid input.\n");
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iRes1 = iNo & iMask1;
    iRes2 = iNo & iMask2;

    return((iRes1 == iMask1) || (iRes2 == iMask2));
}

int main()
{
    UINT iValue = 0;
    int iLocation1 = 0, iLocation2 = 0;
    bool bRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter first location: ");
    scanf("%d", &iLocation1);

    printf("Enter second location: ");
    scanf("%d", &iLocation2);    

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == true)
    {
        printf("Bit at position %d or %d is ON.\n", iLocation1, iLocation2);
    }
    else
    {
        printf("Both bits at position %d and %d are OFF.\n", iLocation1, iLocation2);
    }

    return 0;
}