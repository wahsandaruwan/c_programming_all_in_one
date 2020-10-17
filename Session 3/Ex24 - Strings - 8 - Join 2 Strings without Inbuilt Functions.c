#include <stdio.h>
// Strings - Join 2 strings without inbuilt functions
main(){
    int i,j;
    int len = 0;
    char str1[12];
    char str2[12];
    printf("Enter the string 1 : ");
    scanf("%s",&str1);
    printf("Enter the string 2 : ");
    scanf("%s",&str2);

    // Get Length
    for(i = 0; str1[i] != '\0'; i++){
        len++;
    }

    j = 0;

    // Copy str2 to end of str1
    for(i = len; str2[j] != '\0'; i++){
        str1[i] = str2[j];
        j++;
    }

    str1[i] = '\0';

    printf("Final String : %s",str1);

    getch();
}
