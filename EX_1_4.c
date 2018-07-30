/* Table of conversion Celsius to Fahreit  */

#include <stdio.h> //standard header

int main(){

	float celsius, fahr; //initialize degrees
	int step, upper, lower; // initilize variables

	lower = -50; // staring point of degree
	upper = 500; // ending point of degree
	step=3; // step between degrees
	celsius =lower; // start celsis at lower bound 
	printf("| C ||  F  | \n"); //table header
	printf("------------ \n"); // table header
	while(celsius <= upper){
		fahr = celsius * 9.0/5.0 + 32; // formula convering celsius to fahrenheit
		printf("%3.0f %6.2f\n", celsius, fahr); //table body line by line
		celsius +=step;	 // update celsius for next step
	}

	
	

}
