////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and print that number of *.
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts the number and print that number of *.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
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