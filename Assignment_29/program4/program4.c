////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a file name and one character and count number of 
//               occurrances of that character in the file.
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountChar()
//  Description: Accepts a file name and a character and counts number of occurrances
//               of that character in the file.
//  Input: char*, char
//  Output: int
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 1024

int CountChar(char FName[], char Ch)
{
    int fd = 0, iRes = 0, iCnt = 0, iCountChar = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iDisplacement = 0;

    // Filter
    if(NULL == FName)
    {
        return -1;
    }

    fd = open(FName, O_RDONLY);

    if(-1 == fd)
    {
        return -1;
    }

    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        iDisplacement = 32;
    }
    else if((Ch >= 'a') && (Ch <= 'z'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    while((iRes = read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0; iCnt < iRes; iCnt++)
        {
            if(Buffer[iCnt] == Ch || Buffer[iCnt] == (Ch + iDisplacement))
            {
                iCountChar++;
            }
        }
    }

    close(fd);

    return iCountChar;
}



int main()
{
    char FileName[30] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%[^'\n']s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);

    if(-1 == iRet)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Frequency of %c is: %d\n", cValue, iRet);
    }

    return 0;
}