////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept distance in kilometer and convert it into meter.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: KMToMeter()
//  Description: Accepts the distance in kilometer and converts it into meter.
//  Input: int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
int KMToMeter(int iNo)
{
    int iMeter = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometer:");
    scanf("%d", &iValue);
    
    iRet = KMToMeter(iValue);

    printf("Distance in meter is: %d\n", iRet);

    return 0;
}