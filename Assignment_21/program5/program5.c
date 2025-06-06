////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept N numbers and display the summation of digits of each number.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DigitsSum()
//  Description: Accepts N numbers and displays the summation of digits of each number.
//  Input: int*, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int iArr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSumDigits = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = iArr[iCnt];
        iSumDigits = 0;
    
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSumDigits = iSumDigits + iDigit;
            iNo = iNo / 10;        
        }

        printf("%d\t", iSumDigits);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    DigitsSum(iPtr, iSize);

    free(iPtr);

    return 0;
}