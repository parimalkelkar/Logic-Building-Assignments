////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept N numbers, accept another number as No and return the index of first occurrence of that number.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: FirstOcc()
//  Description: Accepts N numbers, accept another number as No and returns the index of first occurrence of that number.
//  Input: int*, int, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int iArr[], int iLength, int iNo)
{
    int iCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = FirstOcc(iPtr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number.\n");
    }
    else
    {
        printf("First occurrence of the number %d is at index %d.\n", iValue, iRet);
    }

    free(iPtr);

    return 0;
}