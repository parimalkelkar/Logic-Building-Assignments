////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a character and check whether it is a special symbol or not.
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkSpecial()
//  Description: Accepts a character and checks whether it is a special symbol or not.
//  Input: char
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 04/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if((((ch >= 'a') && (ch <= 'z')) == false) && (((ch >= 'A') && (ch <= 'Z')) == false) && (((ch >= '0') && (ch <= '9')) == false))
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

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special symbol.\n");
    }
    else
    {
        printf("It is not a special symbol.\n");
    }

    return 0;
}