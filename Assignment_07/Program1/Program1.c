////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and print the pattern n stars followed by n hashes for a number n.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts a number and prints a pattern of n stars followed by n hashes for a number n.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    Display(iValue);

    return 0;
}