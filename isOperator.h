/*
This function verifies if the input is a token of the type operator.
Then it returns true if it procedes, false otherwise
*/

bool isOperator(char *lexeme){
	if(	strcmp(lexeme, "+") == 0 ||
		strcmp(lexeme, "<") == 0 ){
		return true;
	}
	return false;
}