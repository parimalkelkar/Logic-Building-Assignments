////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to display the smallest digit of all elements from a singly linear linked list.
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
//  Name: DisplaySmall()
//  Description: Displays the smallest digit of all elements from a singly linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplaySmall(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iSMinDigit = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The smallest digit of each element is: \n");    

    while(First != NULL)
    {
        iNo = First -> Data;

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iSMinDigit = 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit <= iSMinDigit)
            {
                iSMinDigit = iDigit;
            }

            iNo = iNo / 10;
        }

        printf("%d\t", iSMinDigit);

        First = First -> Next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    DisplaySmall(Head);

    return 0;
}