////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept radius of a circle and calculate its area.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define PI 3.14

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CircleArea()
//  Description: Accepts radius of a circle and calculates its area.
//  Input: float
//  Output: double
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
double CircleArea(float fRadius)
{
    double dArea = 0.0;

    // Updator
    if(fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius of a circle:");
    scanf("%f", &fValue);
    
    dRet = CircleArea(fValue);

    printf("Area of a circle is: %.4lf\n", dRet);

    return 0;
}