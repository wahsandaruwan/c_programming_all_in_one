#include <stdio.h>
#include <stdlib.h>
// Recursion - Factorial

void facto(int x);
main(){
    int n;
    int pre  = 0;
    int cur = 1;
    printf("Enter number : ");
    scanf("%d",&n);
    // Calling
    facto(n);

    getch();
}

// Factorial
void facto(int x){
    static int fact = 1;
    if(x == 0){
        printf("Factorial is %d",fact);
        getch();
        exit(0);
    }

    fact = fact * x;
    // Recursion
    facto(x-1);
}


