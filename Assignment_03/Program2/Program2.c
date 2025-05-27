////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and print the factors of that number.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayFactor()
//  Description: Accepts the number and displays the factors of that number.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
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
    
    DisplayFactor(iValue);

    return 0;
}