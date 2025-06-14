////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a file name and count number of capital characters from that file.
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Name: CountCapital()
//  Description: Accepts a file name and counts number of capital characters from that file.
//  Input: char*
//  Output: int
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
    int fd = 0, iRes = 0, iCnt = 0, iCountCapital = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

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

    while((iRes = read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0; iCnt < iRes; iCnt++)
        {
            if((Buffer[iCnt] >= 'A' ) && (Buffer[iCnt]) <= 'Z')
            {
                iCountCapital++;
            }
        }
    }

    close(fd);

    return iCountCapital;
}



int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%[^'\n']s", FileName);

    iRet = CountCapital(FileName);

    if(-1 == iRet)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("Number of capital characters are: %d\n", iRet);
    }

    return 0;
}