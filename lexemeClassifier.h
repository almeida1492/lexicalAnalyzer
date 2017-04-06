/*
This procedure receives the counter structure and the lexeme just
gathered from the code. It recognizes which lexeme it stands for 
and update the counter according to this recognition.
*/

void lexemeClassifier(tokens *theCounter, char *lexeme){
	if(isReservedWord(lexeme)){
		theCounter->reservedWord = +1;
		return;
	}
	/*if(isIdentifier(lexeme)){
		theCounter.identifier++;
		return
	}*/
}