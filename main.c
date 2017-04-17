//created by Henrique de Almeida - 2017

#include "caput.h"

int main(){
	FILE *file;
	file = fopen("code.txt", "r");

	char lexemeChar;
	tokens *theCounter;
	char container[20];

	theCounter = (tokens*)malloc(sizeof(tokens));

	theCounter->identifierCount = 0;
	theCounter->keywordCount = 0;
	theCounter->delimiterCount = 0;
	theCounter->operatorCount = 0;
	theCounter->literalCount = 0;

	if(file){
		while((lexemeChar = fgetc(file)) != EOF){
			lexemeClassifier(theCounter, lexemeChar, container);
		}
		
		printf("\n	- Reserved:		%i\n", theCounter->keywordCount);
		printf("	- Identifiers:		%i\n", theCounter->identifierCount);
		printf("	- Delimiters:		%i\n", theCounter->delimiterCount);
		printf("	- Operators:		%i\n", theCounter->operatorCount);
		printf("	- Literals:		%i\n", theCounter->literalCount);
	}
	fclose(file);
	return 0;
}