#include <stdio.h>
main(){
    char dd[20];
    int age;
    printf("ebnter name : ");
    fgets(dd, sizeof(dd), stdin);
    printf("ebnter agw=e : ");
    scanf("%d",&age);

    puts(dd);
    printf("age : %d\n",age);

    getch();
}
