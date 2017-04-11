/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char lexemeChar, char *container){

	if(lexemeChar >= 'a' && lexemeChar <= 'z'){
		container = container + lexemeChar;
	}
	else if(	lexemeChar == ' ' || 
				lexemeChar == ';' ||
				lexemeChar == '(' ||
				lexemeChar == ')' ){

		theCounter->delimiterCount = +1;

		if(isKeyword(container)){
			theCounter->keywordCount = +1;
			return;
		}
	}
}