////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number from user and count the number of ON(1)
//               bits in it without using % and / operators.
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountOne()
//  Description: Accepts a number from user and counts the number of ON(1) bits
//               in it.
//  Input: unsigned int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    UINT iMask = 1, iResult = 0;

    int iCnt = 0, iCountOne = 0;

    for(iCnt = 1; iCnt <= 32; iCnt++, iMask = iMask << 1)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            iCountOne++;
        }
    }

    return iCountOne;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);

    printf("The number of ON bits are: %d\n", iRet);
    
    return 0;
}