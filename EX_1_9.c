/* This program will swap any input of more than 1 space into one space output
	so that ' ', '   ', ... will be always  output as ' '.

  The idea is, that we will store number of encouters of blanks into variable counter_space, but we will 
	always print just one blanks.
*/


#include <stdio.h> // standard import
main(){
int c,counter_spaces; // initilize the input reader, counter 

counter_spaces = 0; // set counter to 0 
while((c=getchar())!=EOF){

	if(c == ' '){
	counter_spaces++; // in case that input is space char. the increment ciunter_spaces +1
		if(counter_spaces==1){ 
			putchar(c);} // if counter_spaces is 1, just output  ' ', in other cases 
					// coutner_spaces will be incrementing , but nothing will be outputed.



	}else{
		counter_spaces=0; // reset counter.
		putchar(c); // show character
	}
	}


}
