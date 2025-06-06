////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept N numbers, accept a range and display all numbers within that range.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Range()
//  Description: Accepts N numbers, accepts a range and displays all numbers within that range.
//  Input: int*, int, int, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Range(int iArr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] >= iStart) && (iArr[iCnt] <= iEnd))
        {
            printf("%d\t", iArr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;

    printf("Enter number of elements:");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d: ", iCnt + 1);
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

    Range(iPtr, iSize, iValue1, iValue2);

    free(iPtr);

    return 0;
}