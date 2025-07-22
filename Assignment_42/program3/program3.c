////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a string and count the number of characters recursively.
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Strlen()
//  Description: Accepts a string and counts the number of characters recursively.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", arr);

    iRet = Strlen(arr);

    printf("The number of characters are: %d\n", iRet);

    return 0;
}