////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to check whether the number is even or odd.
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkEven()
//  Description: Checks whether the number is even or odd.
//  Input: int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 11/05/2025
//
////////////////////////////////////////////////////////////////////////////////
bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iNumber = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d", &iNumber);

    bRet = ChkEven(iNumber);

    if(bRet == true)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}