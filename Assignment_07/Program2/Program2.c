////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept an amount in the US dollars and print its corrsponding value in Indian currency.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define CURRENCY_RATE 70
#define ERR_INVALID -1

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DollarToINR()
//  Description: Accepts an amount in the US dollars and print its corrsponding value in Indian currency.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iInr = 0;

    // Updator
    if(iNo < 0)
    {
        iInr = ERR_INVALID;
    }
    else
    {
        iInr = iNo * CURRENCY_RATE;
    }

    return iInr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD:");
    scanf("%d", &iValue);
    
    iRet = DollarToINR(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("Value in INR is %d\n", iRet);
    }

    return 0;
}