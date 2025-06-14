////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program5.c
//  Description: Used to accept a file name and one string from user and write that string at the end of file.
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
    char Buffer[30];
    char RBuffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the name of the file: ");
    scanf("%[^'\n']s", Fname);

    printf("Enter the string to be written to the file: ");
    scanf(" %[^'\n']s", Buffer);

    fd = open(Fname, O_CREAT | O_WRONLY | O_APPEND);

    if(-1 == fd)
    {
        printf("Unable to open file for writing.\n");
        return -1;
    }

    iRet = write(fd, Buffer, strlen(Buffer));

    printf("%d bytes written to the file.\n\n", iRet);

    close(fd);

    fd = open(Fname, O_RDONLY);

   if(-1 == fd)
    {
        printf("Unable to open file for reading.\n");
        return -1;
    }

    printf("Contents of the file are:\n");

    while((iRet = read(fd, RBuffer, BUFFER_SIZE)) != 0)
    {
        write(1, RBuffer, iRet);
        memset(RBuffer, '\0', BUFFER_SIZE);
    }

    close(fd);   

    return 0;
}