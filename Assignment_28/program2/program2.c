////////////////////////////////////////////////////////////////////////////////
//
//  File name: Program2.c
//  Description: Used to accept a file name from user and create that file.
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

    fd = creat(Fname, 0777);

    if(-1 == fd)
    {
        printf("Unable to create file.\n");
        return -1;
    }

    printf("File created successfully.\n");

    return 0;
}