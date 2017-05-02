/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char lexemeChar, char *container){
	//local variables
	FILE *file;
	char strLexemeChar[2];
	
	//statements
	file = fopen("output.txt", "a");

	strLexemeChar[0] = lexemeChar;
	strLexemeChar[1] = '\0';

	if(lexemeChar >= 'a' && lexemeChar <= 'z'){
		strcat(container, strLexemeChar);	
		if(strcmp(container, "begin") == 0){ //treats the begin exception
			theCounter->keywordCount++;
			fprintf(file, "%s ", container);
			strcpy(container, "");
		}
	}
	else if(isOperator(strLexemeChar)){
		theCounter->operatorCount++;
		strcat(container, strLexemeChar);
		fprintf(file, "%s ", container);
		strcpy(container, "");
	}
	else if(isDelimiter(strLexemeChar)){

		theCounter->delimiterCount++;

		if(!isKeyword(container, theCounter, file)){
			theCounter->identifierCount++;
			strcat(container, strLexemeChar);
			fprintf(file, "%s ", container);
		}
		strcpy(container, "");
	}
	printf("%s\n", container);
	return;	
}