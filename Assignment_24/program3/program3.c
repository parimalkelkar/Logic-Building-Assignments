////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a string and return the difference between the frequency of capital and small characters in it.
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Difference()
//  Description: Accepts a character and returns the difference between the frequency of capital and small characters in it.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCntCapital = 0, iCntSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }

        str++;
    }

    return (iCntSmall - iCntCapital);
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    iRet = Difference(cArr);

    printf("The difference between the number of capital and small characters is: %d\n", iRet);
    
    return 0;
}