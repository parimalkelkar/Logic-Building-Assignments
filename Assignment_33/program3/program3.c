////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a number and check whether the 9th and 12th bit
//               is ON or OFF.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description: Accepts a number and checks whether the 9th and 12th bit is ON
//               or OFF.
//  Input: unsigned int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0, iMask2 = 0, iRes1 = 0, iRes2 = 0;

    iMask1 = 0x00000100;
    iMask2 = 0x00000800;

    iRes1 = iNo & iMask1;
    iRes2 = iNo & iMask2;

    return((iRes1 == iMask1) || (iRes2 == iMask2));
}

int main()
{
    UINT iValue = 0;
    bool bRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("9th or 12th bit is ON.\n");
    }
    else
    {
        printf("Both 9th and 12th bits are OFF.\n");
    }

    return 0;
}