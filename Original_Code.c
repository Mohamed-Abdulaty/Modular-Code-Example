#include <stdio.h>

#define	MAX		100
#define DIGITS	1
#define LIMIT 	100


int main (void){
	char line[MAX];
	char Quit[] = "quit";
	int numbers[LIMIT];
	int idx = 0;
	int i;
	char c;
	int is_quit = 1;
	int is_digits = DIGITS;
	int number;
	double answer = 0;


	while(1){
		printf("Enter a Number(or 'quit'): ");

		i = 0;
		is_digits = DIGITS;

		// Get a line
		while((c = getchar()) != '\n'){
			line[i++] = c;
		}

		line[i] = '\0';

		// string compare between two strings
		i = 0;
		while(line[i] == Quit[i]){
			if (line[i++] == '\0'){
				is_quit = 0;
				break;
			}
		}

		if (is_quit == 0){
			break;
		}


		// Check if the line characters are all digits

		for(i = 0; line[i] != '\0'; i++){
			if ((line[i] < '0') || (line[i] > '9')){
				is_digits = !DIGITS;
			}
		}


		//
		if (is_digits == DIGITS){
			i = 0;
			number = 0;

			// convert the ASCII digits to int's
			while((line[i] >= '0') && (line[i] <= '9')){
				number  = 10 * number + line[i++] - '0';
			}

			numbers[idx++] = number;
			if (idx == LIMIT){
				printf("ARRAY FULL!\n");
				break;
			}
		}else{
			printf("%s is not all digits.\n", line);
		}

	}

	// calculate the average
	number = 0;
	if(idx){
		for(i = 0; i < idx; i++){
			number += numbers[i];
		}

		answer = (double) number/idx;
	}

	printf("%.2f.\n", answer);
}
