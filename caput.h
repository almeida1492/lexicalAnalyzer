//libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stdbool.h"
#include "structDefinition.h"		//Defines the tokens structures
#include "isKeyword.h"				//verifies if the input is a reserved word
#include "isOperator.h"				//verifies if the input is a operator
#include "isDelimiter.h"			//verifies if the input is a delimiter
/*#include "isIdentifier.h"*/		//verifies if the input is a identifier
#include "lexemeClassifier.h"		//classifies the input lexeme and updates the counter


//prototypes
bool 	isKeyword			(char *lexeme, tokens *theCounter, FILE *file); 
bool 	isOperator			(char *lexeme);
bool 	isDelimiter			(char *lexem);
/*bool 	isIdentifier		(char *lexeme);*/
void 	lexemeClassifier	(tokens *theCounter, char lexemeChar, char *container);