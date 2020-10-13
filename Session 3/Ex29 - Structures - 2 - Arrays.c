#include <stdio.h>
#include <string.h>
// Structures
// Structure Arrays

void fixFget(char s[]);

// Define Structure
struct Employee{
    char name[50];
    int pcode;
    float salary;
};

main(){
    int i;
    // Array
    struct Employee e[5];

    // Get inputs
    for(i = 0; i < 3; i++){
        printf("Enter Employee %d Data...\n",i+1);
        printf("\nEnter Name : ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("\nEnter Postal Code : ");
        scanf("%d",&e[i].pcode);
        printf("\nEnter Salary : ");
        scanf("%f",&e[i].salary);
        fflush(stdin);
        printf("\n");
    }

    // Print Data
    printf("\n=============================\n");
    printf("Employee ID         Name           Postal Code         Salary\n");
    for(i = 0; i < 3; i++){
        // Remove \n
        fixFget(e[i].name);
        printf("%d\t\t%s\t\t%d\t\t%0.2f\n",i+1,e[i].name,e[i].pcode,e[i].salary);
    }

    getch();
}

// Function to Remove \n from the string saved by fgets
void fixFget(char s[]) {
  char *pos = strchr(s, '\n');
  if (pos != NULL)
    *pos = '\0';
}



