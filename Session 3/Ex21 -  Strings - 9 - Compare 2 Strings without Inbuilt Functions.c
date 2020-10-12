#include <stdio.h>
#include <stdlib.h>
// Strings - Compare 2 strings without inbuilt functions
main(){
    int i,len;
    int len1 = 0;
    int len2 = 0;
    char str1[7];
    char str2[7];
    printf("Enter the string 1 : ");
    scanf("%s",&str1);
    printf("Enter the string 2 : ");
    scanf("%s",&str2);

    // Get the string that has maximum length
    for(i = 0; str1[i] != '\0'; i++){
        len1++;
    }

    for(i = 0; str2[i] != '\0'; i++){
        len2++;
    }

    if(len1 >= len2){
        len = len1;
    }
    else{
        len = len2;
    }

    // Iterate String 1 till \0
    for(i = 0; str1[i] != len; i++){
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

