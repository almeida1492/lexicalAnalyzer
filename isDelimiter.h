/*
This function verifies if the input is a token of the type delimiter.
Then it returns true if it procedes, false otherwise
*/

bool isDelimiter(char *lexeme, tokens *theCounter){
	if(	strcmp(lexeme, ";") == 0 ||
		strcmp(lexeme, " ") == 0 ||
		strcmp(lexeme, ":") == 0 ){
		theCounter->delimiterCount++;
		return true;
	}
	return false;
}