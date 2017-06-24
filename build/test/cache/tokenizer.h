#include "tokenizerstring.h"






typedef enum{

 IDENTIFIER,

 INT_NUM,

 FLOAT_NUM,

 OPERATOR,

 }TokenType;





typedef struct Token Token;

struct Token{

 TokenType id;

 void *data;

};



typedef struct TokenId TokenId;

struct TokenId{

 TokenType id;

 char *name;

};



typedef struct TokenInt TokenInt;

struct TokenInt{

 TokenType id;

 int value;

};



typedef struct TokenFloat TokenFloat;

struct TokenFloat{

 TokenType id;

 double value;

};



typedef struct TokenOp TokenOp;

struct TokenOp{

 TokenType id;

 Token *left;

 Token *right;

};



Token *tokenize(TokenizerString *str);
