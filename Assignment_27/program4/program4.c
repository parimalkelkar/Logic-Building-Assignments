////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a string and copy small characters of that string into another string.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: StrCpySmall()
//  Description: Accepts a character and copies small characters of that string into another string.
//  Input: char*, char*
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';
}

int main()
{
    char cArr1[30], cArr2[30];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr1);

    StrCpySmall(cArr1, cArr2);

    printf("Contents of other string are: %s", cArr2);

    return 0;
}