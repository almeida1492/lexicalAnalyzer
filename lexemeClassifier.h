/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char lexemeChar, char *container){
	//local variables
	char aux[2];
	
	//statements
	aux[0] = lexemeChar;
	aux[1] = '\0';

	if(lexemeChar >= 'a' && lexemeChar <= 'z'){
		strcat(container, aux);	
	}
	else if(isOperator(aux)){
		theCounter->operatorCount++;
	}
	else if(	lexemeChar == ' ' ||
				lexemeChar == ';' ||
				lexemeChar == ':' ||
				lexemeChar == '(' ||
				lexemeChar == ')' ){

		theCounter->delimiterCount++;

		if(isKeyword(container)){
			theCounter->keywordCount++;
		}
		strcpy(container, "");
	}
	printf("%s\n", container);
	return;	
}