////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to return the addition of all even elements from a singly linear linked list.
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
//  Name: AdditionEven()
//  Description: Returns the addition of all even elements from a singly linked list.
//  Input: struct node *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int AdditionEven(PNODE First)
{
    int iSumEven = 0;

    if(First == NULL)
    {
        return -1;
    }

    while(First != NULL)
    {
        if(((First -> Data) % 2) == 0)
        {
            iSumEven = iSumEven + First -> Data;
        }

        First = First -> Next;
    }

    return iSumEven;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    iRet = AdditionEven(Head);

    Display(Head);

    if(iRet == -1)
    {
        printf("No elements in the list. Addition is not possible.\n");
    }
    else
    {
        printf("Addition of all even elements is: %d.\n", iRet);
    }

    return 0;
}