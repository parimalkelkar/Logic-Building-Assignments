////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept N numbers and return the frequency of even numbers.
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountEven()
//  Description: Accepts N numbers and returns the frequency of even numbers.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountEven(int iArr[], int iLength)
{
    int iCnt = 0, iCntEven = 0;

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
            iCntEven++;
        }
    }

    return iCntEven;
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

    iRet = CountEven(iPtr, iSize);

    printf("The frequency of even numbers is: %d\n", iRet);

    free(iPtr);

    return 0;
}