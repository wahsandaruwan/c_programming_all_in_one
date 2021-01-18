#include <stdio.h>
#include <stdlib.h>
// Strings - Compare 2 strings without inbuilt functions
main(){
    int i;
    char str1[12];
    char str2[12];
    printf("Enter the string 1 : ");
    scanf("%s",&str1);
    printf("Enter the string 2 : ");
    scanf("%s",&str2);

    // Iterate String 1 till \0
    for(i = 0; str1[i] != '\0'; i++){
        // Check Strings Character by Character
        if(str1[i] != str2[i]){

            if(str1[i] > str2[i]){
                printf("\n String 1 is greater...");
            }
            else{
                printf("\n String 2 is greater...");
            }
            getch();
            exit(0);
        }
    }

    printf("Strings are equal!");

    getch();
}

