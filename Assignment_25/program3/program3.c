////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a string and toggle the case.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: strtogglex()
//  Description: Accepts a character and toggles the case.
//  Input: char *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        else if((*str >= 'a') && (*str <= 'z'))
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

    strtogglex(cArr);
    
    return 0;
}