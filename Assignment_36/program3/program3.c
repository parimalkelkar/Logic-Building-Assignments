////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to display the product of all digits of all elements from a singly linear linked list.
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
//  Name: DisplayProduct()
//  Description: Displays the product of all digits of all elements from a singly linked list.
//  Input: struct node *
//  Output: void
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayProduct(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iProdDigit = 0;

    if(First == NULL)
    {
        printf("There are no elements in the list!\n");
        return;
    }

    printf("The product of all digits of elements is: \n");    

    while(First != NULL)
    {
        iNo = First -> Data;

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iProdDigit = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iProdDigit = iProdDigit * iDigit;
            }

            iNo = iNo / 10;
        }

        printf("%d\t", iProdDigit);

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

    DisplayProduct(Head);

    return 0;
}