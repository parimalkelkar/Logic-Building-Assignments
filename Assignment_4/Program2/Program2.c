////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and print its factors in decreasing order.
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: FactRev()
//  Description: Accepts a number and displays its factors in decreasing order.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    FactRev(iValue);

    return 0;
}