////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number and print sum of all of its non factors.
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: SumNonFact()
//  Description: Accepts a number and displays sum of all of its non factors.
//  Input: int
//  Output: int    
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    iRet = SumNonFact(iValue);

    printf("Sum of its all non factors is: %d\n", iRet);
    
    return 0;
}