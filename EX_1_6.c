/* This is just program to output EOF - end of file values*/


#include <stdio.h> // standard import

main(){
    int c; // initilize input reader.

    while((c = getchar())!=EOF){
    
    printf("c is: %d \t and c new EOF %d c \n", c, c != EOF); // print input character and bool of c to EOF
    putchar(c); // show character input 
    }
     }
