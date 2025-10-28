#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int wordValue(char * word){
	int wordLength = strlen(word);
	int result = 0;
	for (int i = 0; i < wordLength; i++){
		result += (int)word[i];
	}
	return result;
}

int main(int argc, char ** argv){
	char allowed[] = {
		'1','2','3','4','5','6','7','8','9','0',
		'a','b','c','d','e','f','g','h','i','j',
		'k','l','m','n','o','p','q','r','s','t',
		'u','v','w','x','y','z','A','B','C','D',
		'E','F','G','H','I','J','K','L','M','N',
		'O','P','Q','U','V','W','X','Y','Z','\0'
	};	
	char word[256] = {0};
	int i = 0;
	int value = 0;
	srand(time(NULL)); // Seed with current time
	while (value != 916){
		word[i] = allowed[rand() % 59];
		value = wordValue(&word[0]); 
		i++;
		if (i > 8){
			i = 0;
		}
	}
	printf("[+] %s\n", word);
	return 0;
}
