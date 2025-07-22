////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to print below pattern recursively.
//  Output: A B C D E F
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
    static char ch = 'A';

    if(ch <= 'E')
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