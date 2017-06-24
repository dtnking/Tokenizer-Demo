





typedef struct TokenizerString TokenizerString;

struct TokenizerString{

 char *data;

 int index;



};





TokenizerString *tokenizerStringCreate(char *str);

void tokenizerStringFree(TokenizerString *tokStr);
