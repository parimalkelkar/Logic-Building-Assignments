////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a string and copy the N number of contents of that string into another string.
//               Note: If the third parameter is greater than the size of source string, then copy whole string
//                     into destination. 
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: StrNCpyX()
//  Description: Accepts a character and copies the N number of contents of that string into another string.
//               Note: If the third parameter is greater than the size of source string, then it copies whole string
//                     into destination.
//  Input: char*, char*, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 06/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrNCpyX(char *src, char *dest, int iCnt)
{
    // Filter
    if(iCnt <= 0)
    {
        printf("Invalid input.\n");
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char cArr1[20], cArr2[20];
    int iValue;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr1);

    printf("Enter number of characters to be copied: ");
    scanf("%d", &iValue);

    StrNCpyX(cArr1, cArr2, iValue);

    printf("Contents of other string are: %s", cArr2);

    return 0;
}