////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number and range of positions from user and
//               toggle all the bits from that range.
//  Author: Parimal Kelkar
//  Date: 21/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ToggleBitRange()
//  Description: Accepts a number and range of positions from user and
//               toggles all the bits from that range.
//  Input: unsigned int, int, int
//  Output: unsigned int
//  Author: Parimal Kelkar
//  Date: 21/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 1;
    int iCnt = 0;

    // Filter
    if(((iStart <= 0) || (iStart > 32)) || (iStart > iEnd) || (iEnd > 32))
    {
        return -1;
    }

    iMask = iMask << (iStart - 1);

    for(iCnt = iStart; iCnt <= iEnd; iCnt++, iMask = iMask << 1)
    {
        iNo = iNo ^ iMask;
    }

    return iNo;
}

int main()
{
    UINT iValue = 0,  iRet = 0;
    int iLocation1 = 0, iLocation2 = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter starting location: ");
    scanf("%d", &iLocation1);

    printf("Enter ending location: ");
    scanf("%d", &iLocation2);    

    iRet = ToggleBitRange(iValue, iLocation1, iLocation2);

    if(iRet == -1)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Modified number is: %d.\n", iRet);
    }

    return 0;
}