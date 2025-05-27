////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a number and perform multiplication of its factors.
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: MultFact()
//  Description: Accepts a number and performs multiplication of its factors.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 13/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    iRet = MultFact(iValue);

    printf("Multiplication of its factors is: %d\n", iRet);

    return 0;
}