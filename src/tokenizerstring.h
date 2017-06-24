#ifndef _TOKENIZERSTRING_H
#define _TOKENIZERSTRING_H

typedef struct TokenizerString TokenizerString;
struct TokenizerString{
	char *data;
	int index;
	
};


TokenizerString *tokenizerStringCreate(char *str);
void tokenizerStringFree(TokenizerString *tokStr);

#endif // _TOKENIZERSTRING_H
