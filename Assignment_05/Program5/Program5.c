////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number and print first 5 multiples of it.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: MultipleDisplay()
//  Description: Accepts a number and prints first 5 multiples of it.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    // Filter
    if(iNo == 0)
    {
        return;
    }
    
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    MultipleDisplay(iValue);

    return 0;
}