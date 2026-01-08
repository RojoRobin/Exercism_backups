#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int count){
	unsigned int ones = 0;
	while (count > 0){
		if (count % 2 == 1) ones++;
		count /= 2;
	}
	return ones;
}

