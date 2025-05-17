////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept area in square feet and convert it into square meters.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: SquareMeter()
//  Description: Accepts area in square feet and converts it into square meters.
//  Input: int
//  Output: double
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
double SquareMeter(int iNo)
{
    double dSqMeter = 0.0;
    
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    dSqMeter = ((double)iNo) * 0.0929;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d", &iValue);
    
    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %.6lf\n", dRet);

    return 0;
}