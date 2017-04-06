//libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stdbool.h"
#include "structDefinition.h"		//Defines the tokens structures
#include "isReservedWord.h"			//verifies if the input is a reserved word
/*#include "isIdentifier.h"*/			//verifies if the input is a identifier
#include "lexemeClassifier.h"		//classifies the input lexeme and updates the counter


//prototypes
bool isreservedWord(char *lexeme); 
/*bool isIdentifier(char *lexeme);*/
void lexemeClassifier(tokens *theCounter, char *lexeme);