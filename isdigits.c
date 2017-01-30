#include "isdigits.h"


int isdigits (char line []){
	
	int is_digits = DIGITS;

	for(int i = 0; line[i] != '\0'; i++){
		if ((line[i] < '0') || (line[i] > '9')){
			is_digits = !DIGITS;
		}
	}

	return is_digits;
}