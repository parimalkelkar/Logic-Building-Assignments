////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept N numbers and display all elements which are divisible by 3 and 5.
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Display()
//  Description: Accepts N numbers and displays all elements which are divisible by 3 and 5.
//  Input: int*, int, int, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 01/06/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(int iArr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0) || (iNo1 == 0) || (iNo2 == 0))
    {
        printf("Invalid input.\n");
        return;
    }

    // Updator
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    printf("The elements which are divisible by %d and %d are:\n", iNo1, iNo2);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((iArr[iCnt] % iNo1) == 0) && ((iArr[iCnt] % iNo2) == 0))
        {
            printf("%d\t", iArr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);    

    Display(iPtr, iSize, iValue1, iValue2);

    free(iPtr);

    return 0;
}