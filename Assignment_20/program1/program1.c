////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept N numbers, accept another number as No and check if that number is present or not.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Check()
//  Description: Accepts N numbers, accept another number as No and check if that number is present or not.
//  Input: int*, int, int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool Check(int iArr[], int iLength, int iNo)
{
    int iCnt = 0, iCntFreq = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return false;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt != iLength)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *iPtr = NULL;
    bool bRet = false;

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

    bRet = Check(iPtr, iSize, iValue);

    if(bRet == true)
    {
        printf("Number %d is present.\n", iValue);
    }
    else
    {
        printf("Number %d is not present.\n", iValue);
    }

    free(iPtr);

    return 0;
}