////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to check whether the character is a vowel or not.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkVowel()
//  Description: Accepts a character and checks whether it is a vowel or not.
//  Input: char
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
bool ChkVowel(char cValue)
{
    if(((cValue == 'A') || (cValue == 'a')) || ((cValue == 'E') || (cValue == 'e')) || ((cValue == 'I') || (cValue == 'i')) || ((cValue == 'O') || (cValue == 'o')) ||((cValue == 'U') || (cValue == 'u')))
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

    printf("Enter character:");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is not a vowel.\n");
    }

    return 0;
}