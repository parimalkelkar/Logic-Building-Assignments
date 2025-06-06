////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a character, if it is capital then display all the
//               characters from it till Z. If it is a small, then display all the
//               characters in reverse order till a. In other cases, return directly.
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts a character, if it is capital then displays all the
//               characters from it till Z. If it is a small, then displays all the
//               characters in reverse order till a. In other cases, return directly..
//  Input: char
//  Output: void
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}