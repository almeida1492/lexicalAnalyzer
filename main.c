//created by Henrique de Almeida - 2017

#include <stdio.h>
#include <stdlib.h>
#include "caput.h"

int main(){
	FILE *file;
	file = fopen("code.txt", "r");

	char lexeme[9];
	tokens theCounter;

	if(file){
		while(fscanf(file, "%s", lexeme) != EOF){
			lexemeClassifier(theCounter, lexeme);
		}
		fclose(file);
	}
}