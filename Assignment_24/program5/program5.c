////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a string and display it in reverse order.
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Reverse()
//  Description: Accepts a character and displays it in reverse order.
//  Input: char *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
       iCnt++;
       str++;
    }

    while(iCnt > 0)
    {
        str--;
        printf("%c", *str);
        iCnt--;
    }
}

int main()
{
    char cArr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    Reverse(cArr);

    return 0;
}