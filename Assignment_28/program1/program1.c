////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program1.c
//  Description: Used to accept a file name from user and open that file in read only mode.
//  Author: Parimal Kelkar
//  Date: 14/06/2025
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of the file: ");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);

    if(-1 == fd)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    printf("File opened successfully.\n");
    close(fd);

    return 0;
}