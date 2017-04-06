//created by Henrique de Almeida - 2017

#include "caput.h"

int main(){
	FILE *file;
	file = fopen("code.txt", "r");

	char lexeme[20];
	tokens *theCounter;

	theCounter = (tokens*)malloc(sizeof(tokens));

	if(file){
		while(fscanf(file, "%s", lexeme) != EOF){
			lexemeClassifier(theCounter, lexeme);
		}
		fclose(file);

		printf("\n - Reserved words: %i\n\n", theCounter->reservedWord);
	}
	return 0;
}