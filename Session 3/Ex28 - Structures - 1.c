#include <stdio.h>
#include <string.h>
// Structures - Collection of variables in different data types

// Function Declaration
void fixFget(char s[]);

// Define Structure
struct Student{
    char name[50];
    int age;
    float weight;
};

main(){
    // Create a structure variable
    struct Student s;
    printf("Enter the name : ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter the age : ");
    scanf("%d",&s.age);
    printf("Enter the weight : ");
    scanf("%f",&s.weight);

    // Remove fget new line
    fixFget(s.name);

    printf("\n------------------------\n");
    printf("Name is : %s\nAge is : %d\nWeight is : %0.2f",s.name,s.age,s.weight);

    getch();
}

// Function to Remove \n from the string saved by fgets
void fixFget(char s[]) {
  char *pos = strchr(s, '\n');
  if (pos != NULL)
    *pos = '\0';
}


