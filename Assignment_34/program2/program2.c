////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to search the last occurrance of a particular element from
//               a singly linear linked list.
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
//  Name: SearchLastOcc()
//  Description: Searchs the last occurrance of a particular element from
//               a singly linear linked list and returns the position at which
//               the element is found.
//  Input: struct node *, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 24/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE First, int iNo)
{
    int iPos = 0, iCount = 0;

    if(First == NULL)
    {
        return -1;
    }

    while(First != NULL)
    {
        iCount++;

        if((First -> Data) == iNo)
        {
            iPos = iCount;
        }
        First = First -> Next;
    }

    if(iPos == 0)
    {
        return -1;
    }
    else
    { 
        return iPos;
    }
}

int main()
{
    PNODE Head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    printf("Enter a number to search: ");
    scanf("%d", &iValue);

    iRet = SearchLastOcc(Head, iValue);

    if(iRet == -1)
    {
        printf("Element %d not found.\n", iValue);
    }
    else
    {
        printf("Last occurrance of an element %d found at position %d.\n", iValue, iRet);
    }

    return 0;
}