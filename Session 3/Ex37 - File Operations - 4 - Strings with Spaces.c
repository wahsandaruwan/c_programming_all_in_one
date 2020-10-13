#include <stdio.h>
#include <stdlib.h>
// File Operations - Store Strings with Spaces
main(){
    FILE *fp;
    char svalue[30];
    char srel;

    // Create
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
    fgets(svalue, sizeof(svalue), stdin);
    fprintf(fp,"%s",svalue);
    fclose(fp);

    // Opening
    fp = fopen("three.txt","r");
    if(fp == NULL){
        printf("File Not Exist!");
        getch();
        exit(0);
    }
    else{
        // Read
        do{
            srel = getc(fp);
            printf("%c",srel);
        }while(srel != EOF);
        // When reach the end of file getc will return a macro called EOF
    }
    fclose(fp);

    getch();
}



