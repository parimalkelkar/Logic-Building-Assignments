////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and display its digits in reverse.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayDigit()
//  Description: Accepts a number and display its digits in reverse.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}