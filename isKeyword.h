/*
This function verifies if the input is a token of the type identifier.
Then it returns true if it procedes, false otherwise
*/

bool isKeyword(char *lexeme, tokens *theCounter, FILE *file){	

	if (strcmp(lexeme, "program") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_program ");
		return true;
	}

	if (strcmp(lexeme, "var") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_var ");
		return true;
	}

	if (strcmp(lexeme, "begin") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_begin ");
		return true;
	}

	if (strcmp(lexeme, "loop") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_loop ");
		return true;
	}

	if (strcmp(lexeme, "integer") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_integer ");
		return true;
	}

	if (strcmp(lexeme, "end") == 0){
		theCounter->keywordCount++;
		fprintf(file, "t_end ");
		return true;
	}
	
	return false;
}