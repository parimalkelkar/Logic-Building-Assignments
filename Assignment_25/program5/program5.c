////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a string and count number of white spaces.
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountWhite()
//  Description: Accepts a character and count number of white spaces.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCntWhite = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCntWhite++;
        }
        str++;
    }

    return iCntWhite;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    iRet = CountWhite(cArr);

    printf("The number of white spaces in the string are: %d\n", iRet);

    return 0;
}