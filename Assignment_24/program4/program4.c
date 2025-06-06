////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a string and check whether it contains vowels in it or not.
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkVowel()
//  Description: Accepts a character and checks whether it contains vowels in it or not.
//  Input: char *
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 05/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a') || (*str == 'E') || (*str == 'e') || (*str == 'I') || (*str == 'i') || (*str == 'O') || (*str == 'o') || (*str == 'U') || (*str == 'u'))
        {
            break;
        }

        str++;
    }

    if(*str != '\0')
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
    char cArr[20];
    bool bRet = false;

    printf("Enter a string: ");
    scanf("%[^'\n']s", cArr);

    bRet = ChkVowel(cArr);

    if(bRet == true)
    {
        printf("The string contains vowel.\n");
    }
    else
    {
        printf("The string does not contain vowel.\n");        
    }    

    return 0;
}