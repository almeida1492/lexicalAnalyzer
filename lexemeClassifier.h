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
	else if(isDelimiter(strLexemeChar, theCounter)){

		if(!isKeyword(container, theCounter, file)){
			theCounter->identifierCount++;
			fprintf(file, "%s ", container);
		}
		if(strcmp(strLexemeChar, ";") == 0){
			fprintf(file, "t_pv ");
		}
		if(strcmp(strLexemeChar, ":") == 0){
			fprintf(file, "t_dp ");
		}
		strcpy(container, "");
	}
	printf("%s\n", container);
	return;	
}


// t_program soma t_pv t_var z t_dp t_integer t_pv t_begin z t_at x t_pv t_loop y t_pv z t_at z t_plus t_pv t_end t_pv t_end t_pv