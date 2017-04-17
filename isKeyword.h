/*
This function verifies if the input is a token of the type identifier.
Then it returns true if it procedes, false otherwise
*/

bool isKeyword(char *lexeme){	
	if (strcmp(lexeme, "program")	== 0	||
		strcmp(lexeme, "var")		== 0	||
		strcmp(lexeme, "begin")		== 0	||
		strcmp(lexeme, "loop") 		== 0	||
		strcmp(lexeme, "integer") 	== 0	||
		strcmp(lexeme, "end")		== 0	){
		return true;
	}
	return false;
}