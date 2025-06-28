////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to display all the perfect elements from a singly linear linked list.
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
//  Name: DisplayPerfect()
//  Description: Displays all the perfect elements from a singly linear linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE First)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iNo = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The perfect numbers are: \n");

    while(First != NULL)
    {
        iNo = First -> Data;
        iSumFact = 0;

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSumFact = iSumFact + iCnt;
            }
        }

        if(iSumFact == iNo)
        {
            printf("%d\t", iNo);
        }

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

    DisplayPerfect(Head);

    return 0;
}