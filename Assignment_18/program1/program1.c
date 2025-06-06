////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept N numbers and return the difference between summation of even elements and summation of odd elements.
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Difference()
//  Description: Accepts N numbers and returns the difference between summation of even elements and summation of odd elements.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Difference(int iArr[], int iLength)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;

    //Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + iArr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + iArr[iCnt];
        }
    }

    return (iSumEven - iSumOdd);
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

    iRet = Difference(iPtr, iSize);

    printf("The difference betwween the summation of odd and even elements is: %d\n", iRet);

    free(iPtr);

    return 0;
}