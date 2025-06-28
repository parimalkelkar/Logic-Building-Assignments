////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to return the second maximum element from a singly linear linked list.
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
//  Name: SecMaximum()
//  Description: Returns the second Maximum element from a singly linked list.
//  Input: struct node *
//  Output: int
//  Author: Parimal Kelkar
//  Date: 28/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#define MIN_LIMIT 0x80000000

int SecMaximum(PNODE First)
{
    int iMax = 0;
    int iSecMax = 0;
    bool bSame = true;

    if(First == NULL)
    {
        return -1;
    }

    if(First -> Next == NULL)
    {
        return -2;
    }

    iMax = First -> Data;
    iSecMax = MIN_LIMIT;       // Set iSecMax to extreme left range as was not sure which minimum value to be assigned.
    First = First -> Next;

    while(First != NULL)
    {
        if((First -> Data) > iMax)
        {
            iSecMax = iMax;
            iMax = First -> Data;
            bSame = false;
        }
        else if(((First -> Data) != iMax) && (First -> Data >= iSecMax))
        {
            iSecMax = First-> Data;
            bSame = false;
        }
    
        First = First -> Next;
    }

    if((iSecMax == MIN_LIMIT) && (bSame == true))
    {
        return -3;
    }

    return iSecMax;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 240);
    InsertFirst(&Head, 320);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    iRet = SecMaximum(Head);

    if(iRet == -1)
    {
        printf("No elements in the list.\n");
    }
    else if(iRet == -2)
    {
        printf("There is only one element in the list.\n");
    }
    else if(iRet == -3)
    {
        printf("All elements are same. Hence, cannot identify the second maximum element.\n");
    }
    else
    {
        Display(Head);
        printf("The second maximum element is: %d.\n", iRet);
    }

    return 0;
}