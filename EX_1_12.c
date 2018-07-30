/* program should print one word per line always.
 */
#include <stdio.h>

void main(){
  int c; // initilize the input reader
  int nc = 0; // initilize and set newline, tab, ' '  counter to 0
  while((c=getchar())!=EOF){
    if(c==' ' || c=='\t' || c=='\n'){
      nc++; // any time program encouter word breaker, increment the counter
      if(nc==1){
      putchar('\n'); // if counter is 1, the break line beetween word, in other case,
			// do nothing, or basically just increment nc by step before
               }
    }else{
      nc=0; // reset nc 
      putchar(c); // output characters 
    }

  }



}
