////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept N numbers and return the difference between the frequency of even and odd numbers.
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Frequency()
//  Description: Accepts N numbers and returns the difference between the frequency of even and odd numbers.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Frequency(int iArr[], int iLength)
{
    int iCnt = 0, iCntEven = 0, iCntOdd = 0;

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
        else
        {
            iCntOdd++;
        }
    }

    return (iCntEven - iCntOdd);
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

    iRet = Frequency(iPtr, iSize);

    printf("The difference between the frequency of even and odd numbers is: %d\n", iRet);

    free(iPtr);

    return 0;
}