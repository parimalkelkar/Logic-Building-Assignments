////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to check whether the first and last bits are ON or OFF.
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Checks whether the first and last bits are ON or OFF.
//  Input: unsigned int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 0x80000001;

    iRes = iNo & iMask;

    return (iRes == iMask);
}



int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("First nad last bits are ON.\n");
    }
    else
    {
        printf("First and last bits are OFF.\n");
    }

    return 0;
}