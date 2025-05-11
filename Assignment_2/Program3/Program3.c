////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to display "Hello" or "Demo" based on a number is less than 10 or not.
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts the number and prints "Hello" or "Demo" based on a number is less than 10 or not.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 10/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);
    
    Display(iValue);

    return 0;
}