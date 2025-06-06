////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept N numbers and return the largest number.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Maximum()
//  Description: Accepts N numbers and returns the largest number.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Maximum(int iArr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    //Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    iMax = iArr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] > iMax)
        {
            iMax = iArr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    iRet = Maximum(iPtr, iSize);

    printf("The largest number is: %d\n", iRet);

    free(iPtr);

    return 0;
}