////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to print below pattern recursively.
//  Input: 5
//  Output: 1 2 3 4 5
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Displays a pattern recursively.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("%d\t", i);
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}