////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and print that number of even numbers.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: PrintEven()
//  Description: Accepts the number and print that number of even numbers.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNumber = 0;

    if(iNo < 0)
    {
        return;
    }

    iCnt = 1;
    iNumber = 1;

    while(iCnt <= iNo)
    {
        if((iNumber % 2) == 0)
        {
           printf("%d\t", iNumber);
           iCnt++;
        }
        
        iNumber++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    PrintEven(iValue);

    return 0;
}