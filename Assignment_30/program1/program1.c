////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to check whether the 15th bit is ON or OFF.
//  Author: Parimal Kelkar
//  Date: 16/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Checks whether the 15th bit is ON or OFF.
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

    iMask = 0x00004000;

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
        printf("15th bit is ON.\n");
    }
    else
    {
        printf("15th bit is OFF.\n");
    }

    return 0;
}