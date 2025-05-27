////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept width and height of a rectangle and calculate its area.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: RectArea()
//  Description: Accepts width and height of a rectangle and calculates its area.
//  Input: float, float
//  Output: double
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    // Updator
    if(fWidth < 0.0f)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0.0f)
    {
        fHeight = -fHeight;
    }

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width of a rectangle:");
    scanf("%f", &fValue1);

    printf("Enter height of a rectangle:");
    scanf("%f", &fValue2);
    
    dRet = RectArea(fValue1, fValue2);

    printf("Area of a rectangle is: %.3lf\n", dRet);

    return 0;
}