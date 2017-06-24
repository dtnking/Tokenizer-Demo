#include "build/temp/_test_expression.c"
#include "Exception.h"
#include "CException.h"
#include "mock_tokenizer.h"
#include "mock_tokenizerstring.h"
#include "expression.h"
#include "tokenizer.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}



void test_computeExpression_given_256_plus_38_should_return_5(void){



 char *str = " 256 + 38 ";

 TokenizerString tokStr = {str,0};

 TokenInt firstVal = {INT_NUM,256};



 tokenizerStringCreate_CMockExpectAndReturn(19, str, &tokStr);

 tokenize_CMockExpectAndReturn(20, &tokStr, (Token*)&firstVal);



 int result = computeExpression (str);

 UnityAssertEqualNumber((UNITY_INT)((294)), (UNITY_INT)((result)), (

((void *)0)

), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

}
