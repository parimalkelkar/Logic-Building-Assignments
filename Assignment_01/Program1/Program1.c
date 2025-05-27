////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to divide 2 numbers.
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Divide()
//  Description: Used to perform the division.
//  Input: int, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is: %d\n", iRet);

    return 0;
}