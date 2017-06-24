/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_tokenizer.h"

static const char* CMockString_str = "str";
static const char* CMockString_tokenize = "tokenize";

typedef struct _CMOCK_tokenize_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Token* ReturnVal;
  int CallOrder;
  TokenizerString* Expected_str;
  CEXCEPTION_T ExceptionToThrow;

} CMOCK_tokenize_CALL_INSTANCE;

static struct mock_tokenizerInstance
{
  int tokenize_IgnoreBool;
  Token* tokenize_FinalReturn;
  CMOCK_tokenize_CALLBACK tokenize_CallbackFunctionPointer;
  int tokenize_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE tokenize_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_tokenizer_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.tokenize_IgnoreBool)
    Mock.tokenize_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_tokenize);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.tokenize_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.tokenize_CallbackFunctionPointer != NULL)
    Mock.tokenize_CallInstance = CMOCK_GUTS_NONE;
}

void mock_tokenizer_Init(void)
{
  mock_tokenizer_Destroy();
}

void mock_tokenizer_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.tokenize_CallbackFunctionPointer = NULL;
  Mock.tokenize_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

Token* tokenize(TokenizerString* str)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_tokenize_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_tokenize);
  cmock_call_instance = (CMOCK_tokenize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.tokenize_CallInstance);
  Mock.tokenize_CallInstance = CMock_Guts_MemNext(Mock.tokenize_CallInstance);
  if (Mock.tokenize_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.tokenize_FinalReturn;
    Mock.tokenize_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.tokenize_CallbackFunctionPointer != NULL)
  {
    return Mock.tokenize_CallbackFunctionPointer(str, Mock.tokenize_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_tokenize,CMockString_str);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_str), (void*)(str), sizeof(TokenizerString), cmock_line, CMockStringMismatch);
  }
  if (cmock_call_instance->ExceptionToThrow != CEXCEPTION_NONE)
  {
    UNITY_CLR_DETAILS();
    Throw(cmock_call_instance->ExceptionToThrow);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_tokenize(CMOCK_tokenize_CALL_INSTANCE* cmock_call_instance, TokenizerString* str)
{
  cmock_call_instance->Expected_str = str;
}

void tokenize_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_tokenize_CALL_INSTANCE));
  CMOCK_tokenize_CALL_INSTANCE* cmock_call_instance = (CMOCK_tokenize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.tokenize_CallInstance = CMock_Guts_MemChain(Mock.tokenize_CallInstance, cmock_guts_index);
  Mock.tokenize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.tokenize_IgnoreBool = (int)1;
}

void tokenize_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, TokenizerString* str, Token* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_tokenize_CALL_INSTANCE));
  CMOCK_tokenize_CALL_INSTANCE* cmock_call_instance = (CMOCK_tokenize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.tokenize_CallInstance = CMock_Guts_MemChain(Mock.tokenize_CallInstance, cmock_guts_index);
  Mock.tokenize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_tokenize(cmock_call_instance, str);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void tokenize_StubWithCallback(CMOCK_tokenize_CALLBACK Callback)
{
  Mock.tokenize_IgnoreBool = (int)0;
  Mock.tokenize_CallbackFunctionPointer = Callback;
}

void tokenize_CMockExpectAndThrow(UNITY_LINE_TYPE cmock_line, TokenizerString* str, CEXCEPTION_T cmock_to_throw)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_tokenize_CALL_INSTANCE));
  CMOCK_tokenize_CALL_INSTANCE* cmock_call_instance = (CMOCK_tokenize_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.tokenize_CallInstance = CMock_Guts_MemChain(Mock.tokenize_CallInstance, cmock_guts_index);
  Mock.tokenize_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ExceptionToThrow = CEXCEPTION_NONE;
  CMockExpectParameters_tokenize(cmock_call_instance, str);
  cmock_call_instance->ExceptionToThrow = cmock_to_throw;
}

