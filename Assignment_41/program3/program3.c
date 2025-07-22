////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to print below pattern recursively.
//  Input: 5
//  Output: 5 4 3 2 1
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Displays a pattern recursively.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
        Display(--iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}