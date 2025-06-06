////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a string, accept one character and return the index of last occurrance of that character.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: LastChar()
//  Description: Accepts a character, accepts one character and returns the index of last occurrance of that character.
//  Input: char *, char
//  Output: int
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iIndex = 0, iCnt = 0;

    iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
        }

        iCnt++;
        str++;
    }

    return iIndex;
}

int main()
{
    char cArr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(cArr, cValue);

    printf("Last location of the character is: %d.\n", iRet);

    return 0;
}