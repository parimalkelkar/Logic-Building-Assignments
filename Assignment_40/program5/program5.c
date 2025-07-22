////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to print below pattern recursively.
//  Output: a b c d e f
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
    static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t", ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}