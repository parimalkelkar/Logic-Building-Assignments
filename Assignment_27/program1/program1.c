////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a string and copy the contents of that string into another string.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: StrCpyX()
//  Description: Accepts a character and copies the contents of that string into another string.
//  Input: char*, char*
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char cArr1[20], cArr2[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr1);

    StrCpyX(cArr1, cArr2);

    printf("Contents of other string are: %s", cArr2);

    return 0;
}