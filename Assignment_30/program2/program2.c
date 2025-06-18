////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to check whether the 5th and 18th bit is ON or OFF.
//  Author: Parimal Kelkar
//  Date: 16/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Checks whether the 5th and 18th bit is ON or OFF.
//  Input: unsigned int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 16/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0, iRes = 0;

    iMask = 0x00020010;

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
        printf("5th and 18th bits are ON.\n");
    }
    else
    {
        printf("5th and 18th bits are OFF.\n");
    }

    return 0;
}