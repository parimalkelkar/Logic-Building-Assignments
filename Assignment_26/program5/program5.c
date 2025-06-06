////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a string and reverse it in place.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: StrRevX()
//  Description: Accepts a character and reverses it in place.
//  Input: char *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *pStr = NULL;
    char cTemp = '\0';

    pStr = str;

    while(*pStr != '\0')
    {
        pStr++;
    }

    pStr--;

    while(pStr > str)
    {
        cTemp = *str;
        *str = *pStr;
        *pStr = cTemp;

        pStr--;
        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    StrRevX(cArr);

    printf("Modified string is: %s", cArr);

    return 0;
}