#include <stdio.h>
// Call/Pass by Reference
// Another Example
int add(int *a, int *b, int *c);
main(){
    int a = 60;
    int b = 20;
    int c;
    // Calling by passing addresses/references
    add(&a,&b,&c);
    printf("Addition is %d",c);

    getch();
}

int add(int *a, int *b, int *c){
    *c = *a + *b;
}

