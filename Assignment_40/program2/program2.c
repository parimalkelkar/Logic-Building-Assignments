////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to print below pattern recursively.
//  Output: 1 2 3 4 5
//  Author: Parimal Kelkar
//  Date: 21/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Displays a pattern recursively.
//  Input: void
//  Output: void
//  Author: Parimal Kelkar
//  Date: 21/07/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d\t", i);
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}