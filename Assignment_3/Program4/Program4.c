////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to display the character in converted case.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayConvert()
//  Description: Accepts a character and displays its converted case.
//  Input: char
//  Output: void
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", (cValue + 32));
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", (cValue - 32));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}