////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept N numbers and return the product of all odd elements.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Product()
//  Description: Accepts N numbers and returns the product of all odd elements.
//  Input: int*, int
//  Output: int
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

int Product(int iArr[], int iLength)
{
    int iCnt = 0, iMultOdd = 1, iCntMult = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((iArr[iCnt] % 2) != 0)
        {
            iMultOdd = iMultOdd * iArr[iCnt];
            iCntMult++;
        }
    }

    if(iCntMult > 0)
    {
        return iMultOdd;
    }
    else
    {
        return 0;
    }
    
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

    iRet = Product(iPtr, iSize);

    printf("The product of all odd elements is: %d\n", iRet);

    free(iPtr);

    return 0;
}