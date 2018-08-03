/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#include "cmock.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "lwerror.h"
#include "djregistry.h"
#include "Mocklwreg.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testWhenRegServerOpenFailsDeleteValueFails();
extern void testWhenCalledWithNonExistentValueDeleteValueSucceeds();
extern void testWhenDeletingDefaultValueSucceeds();
extern void testWhenEncounteringAnErrorDeleteValueFails();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mocklwreg_Init();
}
static void CMock_Verify(void)
{
  Mocklwreg_Verify();
}
static void CMock_Destroy(void)
{
  Mocklwreg_Destroy();
}

/*=======Suite Setup=====*/
static void suite_setup(void)
{

}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
  return num_failures;
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdjregutils.c");
  RUN_TEST(testWhenRegServerOpenFailsDeleteValueFails, 32);
  RUN_TEST(testWhenCalledWithNonExistentValueDeleteValueSucceeds, 43);
  RUN_TEST(testWhenDeletingDefaultValueSucceeds, 62);
  RUN_TEST(testWhenEncounteringAnErrorDeleteValueFails, 81);

  CMock_Guts_MemFreeFinal();
  return suite_teardown(UnityEnd());
}
