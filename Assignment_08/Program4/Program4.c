////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept the temperature in Fahrenheit and convert it into Celcius.
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: FhToCs()
//  Description: Accepts the temperature in Fahrenheit and converts it into celcius.
//  Input: float
//  Output: double
//  Author: Parimal Kelkar
//  Date: 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
double FhToCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = ((fTemp - 32.0f) * (5.0f / 9.0f));

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fValue);
    
    dRet = FhToCs(fValue);

    printf("Temperature in celcius is: %0.5lf\n", dRet);

    return 0;
}