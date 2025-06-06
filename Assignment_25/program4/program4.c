////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a string and display only digits from that string.
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayDigit()
//  Description: Accepts a character and displays only digits from that string.
//  Input: char *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);           
        }

        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    DisplayDigit(cArr);
    
    return 0;
}