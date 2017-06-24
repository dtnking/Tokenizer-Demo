#include <stdlib.h>
#include "tokenizerstring.h"

TokenizerString *tokenizerStringCreate(char *str){
	TokenizerString *tokStr = (TokenizerString *)malloc(sizeof(TokenizerString));
	tokStr->data=str;
	tokStr->index=0;
	
	return tokStr;
}

void tokenizerStringFree(TokenizerString *tokStr){
	free(tokStr);
}

