////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a string and convert it into upper case.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: struprx()
//  Description: Accepts a character and converts it into upper case.
//  Input: char *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a' - 'A');
        }

        printf("%c", *str);

        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    struprx(cArr);
    
    return 0;
}