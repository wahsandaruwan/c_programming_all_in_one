#include <stdio.h>
#include <stdlib.h>
// File Operations - Store Characters
main(){
    FILE *fp;
    char cvalue,crel;

    // Create a new file with write mode
    fp = fopen("two.txt","w");

    if(fp == NULL){
        printf("File Not Created!");
        getch();
        exit(0);
    }
    else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the character value to write : ");
    scanf("%c",&cvalue);

    // Writing Value to File
    fputc(cvalue,fp);

    // Closing the file from write mode
    fclose(fp);

    // Opening the file with read mode
    fp = fopen("two.txt","r");

    if(fp == NULL){
        printf("File Not Exist!");
        getch();
        exit(0);
    }
    else{
        // Reading file with read mode
        crel = fgetc(fp);

        printf("The Character value is : %c",crel);
    }

    fclose(fp);

    getch();
}

