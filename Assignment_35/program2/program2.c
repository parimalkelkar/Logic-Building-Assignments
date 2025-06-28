////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to display all the prime elements from a singly linear linked list.
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
//  Name: DisplayPrime()
//  Description: Displays all the prime elements from a singly linear linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE First)
{
    int iCnt = 0;
    int iNo = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The prime numbers are: \n");

    while(First != NULL)
    {
        iNo = First -> Data;

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt > (iNo / 2))
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
    InsertFirst(&Head, 22);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplayPrime(Head);

    return 0;
}