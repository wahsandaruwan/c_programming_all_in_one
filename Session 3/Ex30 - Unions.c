#include <stdio.h>
// Unions - Allows to store different data types in same memory location
// Memory size equal to size of largest number
// You can define create many members in union,
// But only one member can contain a value at a given time, Others get garbage
// Last use member get higher precedence
// Efficient way of using same memory location for multiple uses

// Define Union
union Data {
   int i;
   float f;
   char str[20];
};
main(){
    union Data data;
    printf( "Memory size occupied by data : %d\n", sizeof(data));

    // Use Memebers
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "Thriple Bee");

    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);

    getch();
}
