#include <stdio.h>
#include <stdlib.h>
// File Operations - Store Strings
// Can use fprintf and fscanf for floats and doubles as well
main(){
    FILE *fp;
    char svalue[30];
    char srel[30];

    // Create a new file with write mode
    fp = fopen("three.txt","w");

    if(fp == NULL){
        printf("File Not Created!");
        getch();
        exit(0);
    }
    else{
        printf("File Created Successfully!\n");
    }

    printf("Enter the string value to write : ");
    scanf("%s",&svalue);

    // Writing Value to File
    fprintf(fp,"%s",svalue);

    // Closing the file from write mode
    fclose(fp);

    // Opening the file with read mode
    fp = fopen("three.txt","r");

    if(fp == NULL){
        printf("File Not Exist!");
        getch();
        exit(0);
    }
    else{
        // Reading file with read mode
        fscanf(fp,"%s ",srel);

        printf("The Character value is : %s",srel);
    }

    fclose(fp);

    getch();
}


