////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to print that number of * of the given number.
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Accept()
//  Description: Accepts the number and print that number of *.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;

    iValue = 5;
    
    Accept(iValue);

    return 0;
}