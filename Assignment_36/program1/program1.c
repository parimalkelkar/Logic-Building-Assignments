////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to reverse each element of a singly linear linked list.
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
//  Name: Reverse()
//  Description: Reverses and displays each element of a singly linear linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Reverse(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iRevDigit = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The elements after reversing the digits are: \n");

    while(First != NULL)
    {
        iNo = First -> Data;
        iRevDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRevDigit = (iRevDigit * 10) + iDigit;
            iNo = iNo /10;
        }

        printf("%d\t", iRevDigit);

        First = First -> Next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);

    Display(Head);

    Reverse(Head);

    return 0;
}