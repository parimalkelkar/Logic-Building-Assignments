////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a character, if it is capital then display the
//               corresponsing small character. If it is a small character, then
//               display the corresponding capital character. Else, print it as it is.
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts a character and displays its converted corresponding case
//               in case if the character is an alphabet, else displays it as it is.
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
        printf("%c\n", (ch + ('a' - 'A')));
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", (ch - ('a' - 'A')));
    }
    else
    {
        printf("%c\n", ch);
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