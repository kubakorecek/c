/* This program should take words as input and then prints histogram with its
length of that word. */

#include <stdio.h>
#define  MAXWORD 500 // max lneght number  of the word.
#define MAXHIS 15
void main(){

  int counter=0; // calculate length of the word
  int storage[MAXWORD]; //store length
  int c;
  printf("HI \n");
  for (int i = 0; i < MAXWORD; ++i)
    storage[i] = 0;
  while((c=getchar())!=EOF){

    if(c==' ' || c=='\t' || c=='\n'){
      // if words breaks, then store value of the word into storage
      ++storage[counter-1];
      counter=0;

    }else{
      counter++;//if not break between words, then increment counter
    }
  }
    //for (int i = 0; i < MAXWORD; ++i)
      //printf(" %d", storage[i]);

      /*vertical*/
    for(int i =0;i<MAXWORD;i++){
      while(storage[i]){
        printf("*\n");
        storage[i]--;
      }
      
      printf("%d\n", i);
    }
      /* horizontal */
    for(int i =0;i<MAXWORD;i++){
        if(i<MAXHIS){   //
            printf("\n %d  |",i+1); //first collumn

      }else if (i==MAXHIS){
            printf("\n%d >|",MAXHIS+1);
    }
      else{
            }
      while(storage[i]){
          printf("*");
          storage[i]--;
      }
    }
}
