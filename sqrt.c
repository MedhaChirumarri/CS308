/* This program computes the square root of a
positive number.
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input>0){
		printf("Sqrt of %d is %f\n",input,sqrt(input));
<<<<<<< HEAD
<<<<<<< HEAD
		printf("exiting");
=======
		printf("exiting");}
>>>>>>> br_negSupport
=======
		printf("exiting");
>>>>>>> br_debug
	else{
		input=-(input);
		printf("Sqrt of %d is i*%f\n))",input,sqrt(input));
	}
	return(0);

} // end main

/*
gcc sqrt.c -o sqrt -lm
./sqrt 9
*/


