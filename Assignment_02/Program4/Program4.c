////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to display the first number in second number of times *.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts two numbers and prints the first number in second number of times.
//  Input: int, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Updator
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
   
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    printf("Enter frequency:");
    scanf("%d", &iCount);
    
    Display(iValue, iCount);

    return 0;
}