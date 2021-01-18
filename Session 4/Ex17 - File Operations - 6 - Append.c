#include <stdio.h>
#include <stdlib.h>
// File Operations
// Append Mode
main(){
    FILE *fp;
    // Append mode
    fp = fopen("d:\\myfile.txt", "a");

    if(fp == NULL){
        printf("No such a file!");
        getch();
        exit(0);
    }

    // Write
    fprintf(fp,"\nThriple Bee");
    printf("Success");

    fclose(fp);

    getch();
}
