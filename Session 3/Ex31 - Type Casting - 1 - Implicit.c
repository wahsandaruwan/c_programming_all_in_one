#include <stdio.h>
// Type Casting - Implicit
main(){
    int x = 10;
    char y = 'a'; //97 - Implicitly converted by the compiler

    x = x + y;

    float z = x + 1.0;

    printf("x = %d, z = %f",x,z);

    getch();
}
