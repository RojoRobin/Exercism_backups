#include "allergies.h"

allergen_list_t get_allergens(int score){
	allergen_list_t new_list = {
		.count = 0,
		.allergens = {0,0,0,0,0,0,0,0}
	};
	while (score > 0){
		int new_allergen = floor(log2(score));
		if (new_allergen < 8){
			new_list.allergens[new_allergen] = 1;
			new_list.count++;
		}
		score -= pow(2, new_allergen);
	}
	return new_list;
}

bool is_allergic_to(allergen_t allergen, int score){
	allergen_list_t list = get_allergens(score);
	return (list.allergens[allergen] == 1);
}
