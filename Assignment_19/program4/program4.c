////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept N numbers and return the frequency 11 from it.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Frequency()
//  Description: Accepts N numbers and return the frequency 11 from it.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Frequency(int iArr[], int iLength)
{
    int iCnt = 0, iCntFreq = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
            iCntFreq++;
        }
    }

    return iCntFreq;
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
        printf("\nEnter element %d: ", iCnt + 1);
        scanf("%d", &iPtr[iCnt]);
    }

    iRet = Frequency(iPtr, iSize);

    printf("11 found for %d times.\n", iRet);

    free(iPtr);

    return 0;
}