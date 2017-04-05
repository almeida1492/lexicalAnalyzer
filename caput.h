#include <stdlib.h>

typedef struct tokens{
	int identifier;
	int reservedWord;
};

//prototypes
void lexemeClassifier(tokens theCounter, char *lexeme);	 

//links
#include "lexemeClassifier";		//classifies the input lexeme and updates the counter