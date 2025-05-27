////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a number and check whether it contains a 0 in it or not.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: ChkZero()
//  Description: Accepts a number and checks whether it contains a 0 in it or not.
//  Input: int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
bool ChkZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }

        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }

    return 0;
}