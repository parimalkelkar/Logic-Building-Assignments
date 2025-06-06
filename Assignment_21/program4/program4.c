////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept N numbers and display all the 3 digit numbers.
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Digits()
//  Description: Accepts N numbers and displays all the 3 digit numbers.
//  Input: int*, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 03/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Digits(int iArr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigitCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = iArr[iCnt];
        iDigitCnt = 0;
    
        while(iNo != 0)
        {
            iDigitCnt++;
            iNo = iNo / 10;        
        }

        if(iDigitCnt == 3)
        {
            printf("%d\t", iArr[iCnt]);
        }
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

    Digits(iPtr, iSize);

    free(iPtr);

    return 0;
}