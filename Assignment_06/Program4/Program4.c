////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to display the table of a number.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Table()
//  Description: Accepts a number and displays its table.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void Table(int iNo)
{
    int iCnt = 0;

    // Filter
    if(iNo == 0)
    {
        printf("Ivalid number!");
        return;
    }

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter character:");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}