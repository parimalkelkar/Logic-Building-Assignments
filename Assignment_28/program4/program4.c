////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program4.c
//  Description: Used to accept a file name from user and display size of that file.
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iSum = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the name of the file: ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if(-1 == fd)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
    {
        iSum = iSum + iRet;
        memset(Buffer, '\0', BUFFER_SIZE);
    }

    printf("File size is %d bytes.\n", iSum);

    close(fd);

    return 0;
}