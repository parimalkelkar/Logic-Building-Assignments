////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a number and count frequency of digits less than 6.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Count()
//  Description: Accepts a number and counts frequency of digits less than 6.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}