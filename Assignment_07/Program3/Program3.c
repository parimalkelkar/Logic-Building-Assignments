////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a number and print even factorial of that number.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: EvenFactorial()
//  Description: Accepts a number and displays even factorial of that number.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return iEvenFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is: %d\n", iRet);

    return 0;
}