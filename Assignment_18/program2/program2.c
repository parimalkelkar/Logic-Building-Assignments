////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept N numbers and display all elements divisible by 5.
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts N numbers and displays all elements divisible by 5.
//  Input: int*, int, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(int iArr[], int iLength, int iNo)
{
    int iCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0) || (iNo == 0))
    {
        printf("Invalid input.\n");
        return;
    }

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("The elements which are divisible by %d are:\n", iNo);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % iNo) == 0)
        {
            printf("%d\t", iArr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
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
        printf("\nEnter element %d: ", iCnt+1);
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iPtr, iSize, iValue);

    free(iPtr);

    return 0;
}