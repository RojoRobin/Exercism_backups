#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate){
	if (candidate == 0){
		return true;
	}
	if (candidate < 0){
		return false;
	}
	char digits[21];
	int digit_count = sprintf(digits, "%d", candidate);
	int sum = 0;
	for (int i = 0; i < digit_count; i++){
		sum += pow(digits[i] - '0', digit_count);
	}
	return (sum == candidate);
}
