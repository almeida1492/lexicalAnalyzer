/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char lexemeChar, char *container){

	if(lexemeChar >= 'a' && lexemeChar <= 'z'){
		char aux[2];
		aux[0] = lexemeChar;
		aux[1] = '\0';


		strcat(container, aux);
		printf("%s\n", container);
	}
	else if(	lexemeChar == ' ' || 
				lexemeChar == ';' ||
				lexemeChar == '(' ||
				lexemeChar == ')' ){

		theCounter->delimiterCount++;

		if(isKeyword(container)){
			theCounter->keywordCount++;
			return;
		}
		strcpy(container, "");
	}
}