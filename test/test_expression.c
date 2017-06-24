#include "unity.h"
#include "tokenizer.h"
#include "expression.h"
#include "mock_tokenizerstring.h"
#include "mock_tokenizer.h"
#include "CException.h"
#include "Exception.h"

void setUp(void){}

void tearDown(void){}

void test_computeExpression_given_256_plus_38_should_return_5(void){
	
	char *str = " 256 + 38 ";
	TokenizerString tokStr = {str,0};
	TokenInt firstVal = {INT_NUM,256};
	
	tokenizerStringCreate_ExpectAndReturn(str,&tokStr);
	tokenize_ExpectAndReturn(&tokStr,(Token*)&firstVal);
	
	int result = computeExpression (str);
	TEST_ASSERT_EQUAL(294,result);
}

