#include "isogram.h"

bool is_isogram(const char phrase[]){
	if (!phrase){
		return false;
	}
	char *lowercase = malloc(sizeof(char) * strlen(phrase));
	for (size_t i = 0; i < strlen(phrase); i++)
		lowercase[i] = tolower(phrase[i]);

	for (char c = 'a'; c <= 'z'; ++c){
		if (strchr(lowercase, c) != strrchr(lowercase, c)){
			free(lowercase);
			return false;
		}
	}
	free(lowercase);
	return true;
}
