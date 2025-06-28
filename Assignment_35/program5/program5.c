////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to display addition of digits of the element from a singly linear linked list.
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int Data;
    struct node *Next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Next = NULL;
    newn -> Data = no;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> Next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | -> ", First -> Data);
        First = First -> Next;
    }

    printf(" NULL\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Name: SumDigit()
//  Description: Displays addition of digits of the element from a singly linear linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void SumDigit(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iSumDigit = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The addition of the digit of element is: \n");

    while(First != NULL)
    {
        iNo = First -> Data;
        iSumDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSumDigit = iSumDigit + iDigit;
            iNo = iNo /10;
        }

        printf("%d\t", iSumDigit);

        First = First -> Next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 640);
    InsertFirst(&Head, 240);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    SumDigit(Head);

    return 0;
}