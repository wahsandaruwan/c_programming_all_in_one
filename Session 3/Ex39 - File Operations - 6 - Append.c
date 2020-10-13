#include <stdio.h>
main(){
    FILE *fp;
    // Append mode
    fp = fopen("d:\\myfile.txt", "a");

    if(fp == NULL){
        printf("No such a file!");
    }

    // Write
    fprintf(fp,"\nThriple Bee");
    printf("Success");

    fclose(fp);

    getch();
}
