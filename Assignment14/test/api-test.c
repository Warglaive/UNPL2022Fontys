/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "api-test.check" instead.
 */

#include <check.h>

#line 1 "api-test.check"
#include "arraydatastore.h"
START_TEST(api_test)
{
#line 3
	ck_assert_int_eq(insert(), 1);
	ck_assert_int_str_eq("hello", "hallo");
	
	
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, api_test);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}