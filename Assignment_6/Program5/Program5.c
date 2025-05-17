////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to display the table of a number in reverse order.
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: TableRev()
//  Description: Accepts a number and displays its table in reverse order.
//  Input: int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 16/05/2025
//
////////////////////////////////////////////////////////////////////////////////
void TableRev(int iNo)
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

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter character:");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}