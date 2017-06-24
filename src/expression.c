#include "expression.h"
#include "tokenizer.h"
#include <stdio.h>
#include "tokenizerstring.h"
#include "CException.h"
#include "Exception.h"

int computeExpression(char *Str){
	TokenizerString *tokStr;
	Token *token;
	TokenInt *tokenInt;
	printf("expr: %s\n",Str);
	tokStr = tokenizerStringCreate(Str);		//being mocked
	token = tokenize(tokStr);					//being mocked
	
	if(token->id == INT_NUM){
		tokenInt = (TokenInt *)token;
		printf("the value of the integer token is %d\n",tokenInt->value);
	}else{
		Throw(createException("First token is not a number",		\
								1));
	}
	return 0;
}
