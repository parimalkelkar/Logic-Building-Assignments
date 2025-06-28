////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to return the largest element from a singly linear linked list.
//  Author: Parimal Kelkar
//  Date: 25/06/2025
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
//  Name: Maximum()
//  Description: Returns the largest element of all elements from a singly linked list.
//  Input: struct node *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 25/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE First)
{
    int iMax = 0;

    if(First == NULL)
    {
        return -1;
    }

    iMax = First -> Data;
    First = First -> Next;

    while(First != NULL)
    {
        if((First -> Data) > iMax)
        {
            iMax = First -> Data;
        }

        First = First -> Next;
    }

    return iMax;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 240);
    InsertFirst(&Head, 320);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    iRet = Maximum(Head);

    if(iRet == -1)
    {
        printf("No elements in the list.\n");
    }
    else
    {
        Display(Head);
        printf("The largest element is: %d.\n", iRet);
    }

    return 0;
}