#include <stdio.h>
// Functions with parameters

// Function Declaration/Prototype
float getAnswer(float x, int y);

main(){
    float num1;
    int num2;
    printf("Enter Numbers (Ex: 23,45) : ");
    scanf("%f,%d",&num1,&num2);

    // Calling function by passing values when printing
    printf("Answer is : %f",getAnswer(num1,num2));

    getch();

}

// Function Definition
float getAnswer(float x, int y){
    // Send the addition of x + y to the place that calling happened
    return(x+y);
}
