////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept two numbers and display the position of common ON
//               bits from those two numbers.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CommonBits()
//  Description: Accepts two numbers and displays the position of common ON bits
//               from those two numbers.
//  Input: unsigned int, unsigned int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 1, iRes1 = 0, iRes2 = 0;
    int iCnt = 0, iPos = 0;

    for(iCnt = 1, iPos = 1; iCnt <= 32; iCnt++, iMask = iMask << 1, iPos++)
    {
        iRes1 = iNo1 & iMask;
        iRes2 = iNo2 & iMask;

        if((iRes1 == iMask) && (iRes2 == iMask))
        {
            printf("%d\t", iPos);
        }
    }

    printf("\n"); 
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%u", &iValue1);

    printf("Enter second number: ");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}