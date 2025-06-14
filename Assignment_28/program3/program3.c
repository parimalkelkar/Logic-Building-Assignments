////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program3.c
//  Description: Used to accept a file name from user and read all data from that file and display its contents on screen.
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
    int fd = 0, iRet = 0;
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
        write(1, Buffer, iRet);
        memset(Buffer, '\0', BUFFER_SIZE);
    }

    close(fd);

    return 0;
}