////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept the division of a student and based on it, display the exam timing.
//               There are 4 divisions in school as A, B, C, D. Exam of division A is a 7 a.m., B 
//               is a at 8:30 a.m., C is at 9:20 a.m. and D is at 10:30 a.m. Application should be
//               case insensitive.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplaySchedule()
//  Description: Accepts the division of a student and based on it, displays the exam timing.
//  Input: char
//  Output: void
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7:00 a.m.\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8:30 a.m.\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9:20 a.m.\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10:00 a.m.\n");
    }
    else
    {
        printf("Invalid division!\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}