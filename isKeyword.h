/*
This procedure verifies if the input is a token of the type identifier.
Then it returns true if it procedes, false otherwise
*/

bool isKeyword(char *lexeme){	
	if (strcmp(lexeme, "program") == 0){
		return true;
	}
	return false;
}