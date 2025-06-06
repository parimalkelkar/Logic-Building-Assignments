////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a character and display its ASCII value in decimal, octal and hexadecimal.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts a character and displays its ASCII value in decimal, octal and hexadecimal.
//  Input: char
//  Output: void
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Its ASCII value in decimal is: %d\n", ch);

    printf("Its ASCII value in octal is: %4o\n", ch);

    printf("Its ASCII value in hexadecimal is: 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}