/* Table of conversion Celsius to Fahreit */

#include <stdio.h>

int main(){

	float celsius, fahr;
	int step, upper, lower;

	lower = -50;
	upper = 500;
	step=3;
	celsius =lower;
	printf("| C ||  F  | \n"); //table header
	printf("------------ \n"); // table header
	while(celsius <= upper){
		fahr = celsius * 9.0/5.0 + 32;
		printf("%3.0f %6.2f\n", celsius, fahr);
		celsius +=step;	
	}

	
	

}
