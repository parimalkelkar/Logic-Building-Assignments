////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a string, accept one character and return the index of first occurrance of that character.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: FirstChar()
//  Description: Accepts a character, accepts one character and returns the index of first occurrance of that character.
//  Input: char *, char
//  Output: int
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }

        iIndex++;
        str++;
    }

    if(*str != '\0')
    {
        return iIndex;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char cArr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(cArr, cValue);

    printf("First location of the character is: %d.\n", iRet);

    return 0;
}