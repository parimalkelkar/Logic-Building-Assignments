////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a string, accept one character and return the frequency of that character.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountChar()
//  Description: Accepts a character, accepts one character and returns the frequency of that character.
//  Input: char *, char
//  Output: int
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char cArr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(cArr, cValue);

    printf("The character frequency is: %d.\n", iRet); 

    return 0;
}