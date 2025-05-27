////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to check whether the number is divisble by 5 or not.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Check()
//  Description: Checks whether the number is divisible by 5 or not.
//  Input: int
//  Output: BOOL
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if((iNo % 5) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }

    return 0;
}