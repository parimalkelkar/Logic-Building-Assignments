////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a string and count the number of small characters.
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountSmall()
//  Description: Accepts a character and counts the number of small characters.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCntSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }

        str++;
    }

    return iCntSmall;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    iRet = CountSmall(cArr);

    printf("The number of small characters are: %d\n", iRet);
    
    return 0;
}