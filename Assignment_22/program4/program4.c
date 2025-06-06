////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a character and check whether it is a small case or not.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkSmall()
//  Description: Accepts a character and check whether it is a small case or not.
//  Input: char
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("It is a small case character.\n");
    }
    else
    {
        printf("It is not a small case character.\n");
    }

    return 0;
}