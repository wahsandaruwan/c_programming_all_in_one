#include <stdio.h>
// Strings - Count alphabets, digits and symbols without inbuilt functions
main(){
    int i;
    int al = 0;
    int dg = 0;
    int sy = 0;
    char s[50];
    printf("Enter the String : ");
    scanf("%s",&s);

    //Iterate until \0
    for(i = 0; s[i] != '\0'; i++){
        // Alphabets
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            al++;
        }

        // Digits
        else if(s[i] >= '0' && s[i] <= '9'){
            dg++;
        }

        // Symbols
        else{
            sy++;
        }
    }

    printf("Alphabets : %d\n",al);
    printf("Digits : %d\n",dg);
    printf("Symbols : %d\n",sy);

    getch();
}
