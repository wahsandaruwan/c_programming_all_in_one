#include <stdio.h>
// File Operation - Read and Write line by line
main(){
    FILE *fp;
    int count = 0;
    char str[100];

    // Create and Write
    fp = fopen("sample.txt","w");

    if(fp == NULL){
        printf("Error creating a file!");
    }

    // Get Input
    while(count < 5){
        printf("Enter Strings : ");
        fgets(str, sizeof(str), stdin);
        fprintf(fp,"%s",str);
        count++;
    }

    fclose(fp);

    // Open and Read
    fp = fopen("sample.txt","r");

    if(fp == NULL){
        printf("Error oepening the file!");
    }

    // Print Data line by line
    while(1){
        if(fgets(str, sizeof(str), fp) == NULL){
            break;
        }
        else{
            printf("%s",str);
        }
    }

    fclose(fp);

    getch();
}
