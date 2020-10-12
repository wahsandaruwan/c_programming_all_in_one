#include <stdio.h>
#include <stdlib.h>
// Fibonacci, Factorial, Prime Number Program
// With Functions

// Function Prototypes
factorial(int x);
isPrime(int x);
fibonacci(int x);

main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // Calling
    factorial(n);
    isPrime(n);
    fibonacci(n);

    getch();
}

// For Factorial
factorial(int x){
    int i;
    int fact = 1;
    for(i = 1; i <= x; i++){
        fact = fact * i;
    }
    printf("\nFactorial of %d : %d\n",x,fact);
}

// For Check if it is a Prime Number
isPrime(int x){
    int i;
    for(i = 2; i < x/2; i++){
        if(x % i == 0){
            printf("%d is not a Prime Number!\n",x);
            getch();
            exit(0);
        }
    }
    printf("%d is a Prime Number!\n",x);
}

// For Fibonacci Series
fibonacci(int x){
    int pre = 0;
    int cur = 1;
    int i,temp;

    printf("Fibonacci Series : %d\t%d",pre,cur);
    for(i = 3; i <= x; i++){
        temp = cur;
        cur = pre + cur;
        pre = temp;
        printf("\t%d",cur);
    }
}

