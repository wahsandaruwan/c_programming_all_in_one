#include <stdio.h>
#include <stdlib.h>
// File Operations - Creating Files (Create,Open,Read,Write,Seek,Close)
// Store re accessible data
// Organize data
// Can be shared with other programs and computers
main(){
    FILE *fp;
    int value,rel;

    // Create a new file with write mode
    fp = fopen("one.txt","w");

    if(fp == NULL){
        printf("File Not Created!");
        getch();
        exit(0);
    }
    else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the value to write : ");
    scanf("%d",&value);

    // Writing Value to File
    putw(value,fp);

    // Closing the file from write mode
    fclose(fp);

    // Opening the file with read mode
    fp = fopen("one.txt","r");

    // Reading file with read mode
    rel = getw(fp);

    printf("\nThe result is : %d",rel);

    fclose(fp);

    getch();
}
