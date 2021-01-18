#include <stdio.h>
// File Operations - Structures

struct Student{
    int id;
    int marks;
};
main(){
    FILE *fp;
    struct Student stval, strel;
    // Creating file and write
    fp = fopen("four.dat","wb");

    printf("Enter the ID : ");
    scanf("%d",&stval.id);
    printf("Enter the Marks : ");
    scanf("%d",&stval.marks);

    fwrite(&stval,sizeof(stval),1,fp);

    fclose(fp);

    // Open the file and read
    fp = fopen("four.dat","rb");
    fread(&strel,sizeof(strel),1,fp);

    printf("\nThe id is %d",strel.id);
    printf("\nThe Mark is %d",strel.marks);

    fclose(fp);

    getch();
}
