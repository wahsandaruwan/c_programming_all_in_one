#include <stdio.h>
// Enumeration - User defined data type
// It is mainly used to assign names to integral constants
// Makes program easy to read and maintain
// Two enums can have same values
// If values are not assigned explicitly then values are assigns form 0

// Define a Enumumeration
enum year{January, February, March, April, May, June, July,
August, September, October, November, December};
enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};
main(){
    int i;
    for(i = January; i <= December; i++){
        printf("%d\n",i);
    }

    printf("\n---------------------\n")

    for(i = Mon; i <= Sun; i++){
        printf("%d\n",i);
    }

    getch();
}
