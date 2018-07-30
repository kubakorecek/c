/*table conversion with reverse order. Threfore, table will be sorted in desceding order */

#include <stdio.h> //standard header

void main(){

    float fahr, celsius; // initialize degree variables
    int lower, upper, step; // initilize variables for table

    	lower = -50; // ending point of table
	upper = 500; // stating point of table
	step=3; // step between table lines
	celsius =upper; // start celsius at starting point
	printf("| C ||  F  | \n"); //table header
	printf("------------ \n"); // table header
	while(celsius >= lower){
		fahr = celsius * 9.0/5.0 + 32; //calculate fahrenheit by given celsius
		printf("%3.0f %6.2f\n", celsius, fahr); // print body of table line by line
		celsius -=step; // recalculate next step.
	}
}
