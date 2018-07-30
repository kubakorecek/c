/* regular machine operators printer
	program suppose to show \n, \tm \b as output represented by
	characters.
 */

#include <stdio.h> // standard import

void main(){
  char c; // initilize input reader

  while((c=getchar())!=EOF){
    if(c=='\n'){     
      putchar('\\');  // output / 
      putchar('n');
    }
    else if(c=='\t'){
      putchar('\\'); // output / 
      putchar('t');

    }
    else if(c=='\b'){
      putchar('\\'); // output / 
      putchar('b');
    }
    else{
      putchar(c); // output all other characters.
    }



  }



}
