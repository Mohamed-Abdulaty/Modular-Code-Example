#include "average.h"


double average (int numbers[], int idx){
	int number = 0;
	double answer = 0.0;
	if(idx){
		for(int i = 0; i < idx; i++){
			number += numbers[i];
		}

		answer = (double) number/idx;
	}

	return answer;
}