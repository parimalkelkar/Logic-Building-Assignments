////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to display the ASCII tablee containing symbols, Decimal,
//               Octal and Hexadecimal representation of every member from 0 to 255.
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayASCII()
//  Description:  display the ASCII tablee containing symbols, Decimal, Octal
//                and Hexadecimal representation of every member from 0 to 255.
//  Input: void
//  Output: void
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    char ch = '\b';
    unsigned int iCnt = 0;

    printf("Symbol\tDecimal\tOctal\tHexadecimal\n");
    for(iCnt = 0; iCnt <= 255; iCnt++, ch++)
    {
        printf("%c\t%d\t%04o\t0x%X\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}