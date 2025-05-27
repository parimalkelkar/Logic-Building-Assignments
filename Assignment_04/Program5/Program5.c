///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to print the difference between sum of all factors and non factors of a number.
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Name: FactDiff()
//  Description: Accepts a number and displays the difference between sum of its all factors and non factors.
//  Input: int
//  Output: int    
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return (iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between sum of its all factors and non factors is: %d\n", iRet);

    return 0;
}