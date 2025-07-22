////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to print below pattern recursively.
//  Input: 6
//  Output: a b c d e f
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
    static char ch = 'a';

    if(iNo > 0)
    {
        printf("%c\t", ch++);
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