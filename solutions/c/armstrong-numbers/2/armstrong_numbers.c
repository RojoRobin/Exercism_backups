#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate){
	if (candidate == 0){
		return true;
	}
	if (candidate < 0){
		return false;
	}
	int digit_count =floor(log10(candidate))+1;
	char *digits= malloc((digit_count+1) * sizeof(char));
	sprintf(digits, "%d", candidate);
	int sum = 0;
	for (int i = 0; i < digit_count; i++){
		sum += pow(digits[i] - '0', digit_count);
	}
	free(digits);
	return (sum == candidate);
}
