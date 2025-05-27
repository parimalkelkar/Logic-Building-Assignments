////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a number and print odd numbers up to that number.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: OddDisplay()
//  Description: Accepts the number and prints odd numbers up to that number.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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
    
    OddDisplay(iValue);

    return 0;
}