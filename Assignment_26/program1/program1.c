////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a string, accept one character and check whether that character is present in the string or not.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkChar()
//  Description: Accepts a character, accepts one character and checks whether that character is present in the string or not.
//  Input: char *, char
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }

        str++;
    }

    if(*str != '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cArr[20], cValue = '\0';
    bool bRet = false;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(cArr, cValue);

    if(bRet == true)
    {
        printf("Character found.\n");
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}