#include <stdio.h>

/*This program will convert fahreiheit degrre into celsius and show it as F-C table */

int main(){
	float fahr, celsius; // initialize degress variable
	float lower, upper, step; // initialize value variable

	lower = 0; // lower - start degree
	upper = 300; // finishing degree
	step = 20; // step given between degrees
	

	printf("| F ||  C  |\n"); // print table header
	printf("------------\n"); // print table ------- below header
	
	fahr = lower; // start the Fahr in lower bound 
	while( fahr <= upper){
		celsius = (5.0/9.0)*(fahr-32.0); // formula converting celisus
		printf("%3.0f %6.1f \n", fahr, celsius); // this will print table body line by line!  
		fahr +=step; // shift fahrenheit by step, for recalculating	
		}

}
