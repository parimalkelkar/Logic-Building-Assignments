////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a string and count the number of capital characters.
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountCapital()
//  Description: Accepts a character and counts the number of capital characters.
//  Input: char *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCntCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }

        str++;
    }

    return iCntCapital;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    iRet = CountCapital(cArr);

    printf("The number of capital characters are: %d\n", iRet);
    
    return 0;
}