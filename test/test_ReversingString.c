#include "unity.h"
#include "ReversingString.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getStringLength_given_a_NULL_expect_0(void)
{	
    TEST_ASSERT_EQUAL(0, getStringLength(NULL));
}

void test_getStringLength_given_empty_string_expect_0(void)
{	
    TEST_ASSERT_EQUAL(0, getStringLength(""));
}

void test_getStringLength_given_a_f_string_expect_1(void)
{	
    TEST_ASSERT_EQUAL(1, getStringLength("f"));
}

void test_getStringLength_given_mumbo_jumbo_string_expect_11(void)
{	
    TEST_ASSERT_EQUAL(11, getStringLength("mumbo-jumbo"));
}

/*void test_ReversingString_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ReversingString");
}*/
