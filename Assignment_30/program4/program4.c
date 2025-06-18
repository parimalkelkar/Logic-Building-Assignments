////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to check whether the 7th, 8th, 9th bits are ON or OFF.
//  Author: Parimal Kelkar
//  Date: 17/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Checks whether the 7th, 8th, 9th bits are ON or OFF.
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

    iMask = 0x000001C0;

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
        printf("7th, 8th and 9th bits are ON.\n");
    }
    else
    {
        printf("7th, 8th and 9th bits are OFF.\n");
    }

    return 0;
}