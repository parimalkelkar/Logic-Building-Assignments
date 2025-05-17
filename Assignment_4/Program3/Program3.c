////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a number and print its all non factors.
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: NonFact()
//  Description: Accepts a number and displays all its non factors.
//  Input: int
//  Output: void    
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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
    
    NonFact(iValue);

    return 0;
}