////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a string and count the number of white spaces recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: WhiteSpace()
//  Description: Accepts a string and counts the number of white spaces recursively.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    iRet = WhiteSpace(arr);

    printf("The number of white spaces are: %d\n", iRet);

    return 0;
}