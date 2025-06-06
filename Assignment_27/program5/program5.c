////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept two strings and concat second string after first string.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: StrCatX()
//  Description: Accepts a character and concats second string after first string.
//  Input: char*, char*
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }

    *src = '\0';
}

int main()
{
    char cArr1[50], cArr2[30];

    printf("Enter first string: ");
    scanf("%[^'\n']s", cArr1);

    printf("Enter second string: ");
    scanf(" %[^'\n']s", cArr2);

    StrCatX(cArr1, cArr2);

    printf("Contents of the first string are: %s", cArr1);

    return 0;
}