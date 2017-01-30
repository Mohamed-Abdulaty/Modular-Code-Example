#include <stdio.h>
#include "getaline.h"
#include "mystrcmp.h"
#include "isdigits.h"
#include "myatoi.h"
#include "average.h"

#define	MAX		100
#define LIMIT 	100


int main (void){

	char line[MAX];	
	int numbers[LIMIT];
	int idx = 0;

	while(1){
		printf("Enter a Number(or 'quit'): ");

		// Get a line
		getaline(line);

		// string compare between two strings
		if ( ! mystrcmp (line, "quit") ){
			break;
		}

		// Check if the line characters are all digits
		if (isdigits(line)){

			// convert the ASCII digits to int's
			numbers[idx++] = myatoi(line);
			if (idx == LIMIT){
				printf("ARRAY FULL!\n");
				break;
			}
		}
		else{
			printf("%s is not all digits.\n", line);
		}

	}

	// calculate the average
	printf("%.2f.\n", average(numbers, idx));
}
