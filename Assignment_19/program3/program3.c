////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept N numbers and check whether the numbers contain 11 among them or not.
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: Check()
//  Description: Accepts N numbers and check whether the numbers contain 11 among them or not.
//  Input: int*, int
//  Output: bool
//  Author: Parimal Kelkar
//  Date: 02/06/2025
//
////////////////////////////////////////////////////////////////////////////////

bool Check(int iArr[], int iLength)
{
    int iCnt = 0;

    // Filter
    if((NULL == iArr) || (iLength <= 0))
    {
        printf("Invalid input.\n");
        return false;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *iPtr = NULL;
    bool bRet;

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

    bRet = Check(iPtr, iSize);

    if(bRet == true)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is not present.\n");
    }


    free(iPtr);

    return 0;
}