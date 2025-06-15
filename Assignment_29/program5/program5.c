////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a file name and a count and read that number of 
//               characters from starting position.
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: DisplayN()
//  Description: Accepts a file name and a count and reads that number of 
//               characters from starting position.
//  Input: char*, int
//  Output: void
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 1024

void DisplayN(char FName[], int iSize)
{
    int fd = 0, iRes = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    // Filter
    if(NULL == FName)
    {
        printf("Invalid input.\n");
        return;
    }

    fd = open(FName, O_RDONLY);

    if(-1 == fd)
    {
        printf("Unable to open the file!\n");
        return;
    }

    while(((iRes = read(fd, Buffer, BUFFER_SIZE)) != 0))
    {
        for(iCnt = 0; (iCnt < iRes) && (iSize != 0); iCnt++, iSize--)
        {
            printf("%c", Buffer[iCnt]);
        }

        memset(Buffer, '\0', BUFFER_SIZE);
    }

    close(fd);
}



int main()
{
    char FileName[30] = {'\0'};
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%[^'\n']s", FileName);

    printf("Enter the number of characters: ");
    scanf(" %d", &iValue);

    DisplayN(FileName, iValue);    

    return 0;
}