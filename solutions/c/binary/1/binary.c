#include "binary.h"

int convert(const char *input){
	for (size_t i = 0; i < strlen(input); i++){
		if (input[i] != '1' && input[i] != '0'){
			return INVALID;
		}
	}
	int value = 0;
	int base = pow(2, strlen(input) - 1);
	for (size_t j = 0; j < strlen(input); ++j){
		value += (input[j] -'0') * base;
		base /= 2;
	}
	return value;
}
