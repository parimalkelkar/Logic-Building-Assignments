////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept N numbers and return the smallest number.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Minimum()
//  Description: Accepts N numbers and returns the smallest number.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Minimum(int iArr[], int iLength)
{
    int iCnt = 0, iMin = 0;

    //Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    iMin = iArr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] < iMin)
        {
            iMin = iArr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(iPtr, iSize);

    printf("The smallest number is: %d\n", iRet);

    free(iPtr);

    return 0;
}