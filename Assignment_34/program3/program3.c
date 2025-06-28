////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to return the addition of all elements from a singly linear linked list.
//  Author: Parimal Kelkar
//  Date: 24/06/2025
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

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Addition()
//  Description: Returns the addition of all elements from a singly linked list.
//  Input: struct node *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 24/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Addition(PNODE First)
{
    int iSum = 0;

    if(First == NULL)
    {
        return -1;
    }

    while(First != NULL)
    {
        iSum = iSum + First -> Data;
        First = First -> Next;
    }

    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    iRet = Addition(Head);

    if(iRet == -1)
    {
        printf("No elements in the list. Addition is not possible.\n");
    }
    else
    {
        printf("Addition of all elements is: %d.\n", iRet);
    }

    return 0;
}