#include "complex_numbers.h"

complex_t c_add(complex_t a, complex_t b){
	complex_t sum = {
		.real = a.real + b.real,
		.imag = a.imag + b.imag
	};
	return sum;
}

complex_t c_sub(complex_t a, complex_t b){
	complex_t diff = {
		.real = a.real - b.real,
		.imag = a.imag - b.imag
	};
	return diff;
}

complex_t c_mul(complex_t a, complex_t b){
	complex_t prod = {
		.real = a.real * b.real - a.imag * b.imag,
		.imag = a.imag * b.real + a.real * b.imag
	};
	return prod;
}

complex_t c_div(complex_t a, complex_t b){
	complex_t quot = {
		.real = (a.real * b.real + a.imag * b.imag)/(b.real * b.real + b.imag * b.imag),
		.imag = (a.imag * b.real - a.real * b.imag)/(b.real * b.real + b.imag * b.imag)
	};
	return quot;
}

double c_abs(complex_t x){
	return (sqrt(pow(x.real, 2) + pow(x.imag, 2)));
}

complex_t c_conjugate(complex_t x){
	complex_t conj = {
		.real = x.real,
		.imag = x.imag * -1
	};
	return conj;
}

double c_real(complex_t x){
	return x.real;
}

double c_imag(complex_t x){
	return x.imag;
}

complex_t c_exp(complex_t x){
	complex_t expo = {
		.real = exp(x.real) * cos(x.imag),
		.imag = exp(x.real) * sin(x.imag)
	};
	return expo;
}
