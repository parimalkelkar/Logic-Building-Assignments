////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and position from user and check whether
//               the bit at that position is ON or OFF. If the bit is one return
//               true otherwise return false.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkBit()
//  Description:  Accepts a number and position from user and checks whether the
//                bit at that position is ON or OFF. If the bit is one, it returns
//                true otherwise returns false.
//  Input: unsigned int, unsigned int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    printf("Enter the location: ");
    scanf("%u", &iLocation);

    bRet = ChkBit(iValue, iLocation);

    if(bRet == true)
    {
        printf("The bit at location %d is ON.\n", iLocation);
    }
    else
    {
        printf("The bit at location %d is OFF.\n", iLocation);
    }

    return 0;
}