/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char lexemeChar, char *container){
	//local variables
	char strLexemeChar[2];
	
	//statements
	strLexemeChar[0] = lexemeChar;
	strLexemeChar[1] = '\0';

	if(lexemeChar >= 'a' && lexemeChar <= 'z'){
		strcat(container, strLexemeChar);	
		if(strcmp(container, "begin") == 0){ //treats the begin exception
			theCounter->keywordCount++;
			strcpy(container, "");
		}
	}
	else if(isOperator(strLexemeChar)){
		theCounter->operatorCount++;
		strcpy(container, "");
	}
	else if(isDelimiter(strLexemeChar)){

		theCounter->delimiterCount++;

		if(isKeyword(container)){
			theCounter->keywordCount++;
		}
		else{
			theCounter->identifierCount++;
		}
		strcpy(container, "");
	}
	printf("%s\n", container);
	return;	
}