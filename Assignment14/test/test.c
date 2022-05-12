#include <check.h>
#include "arraydatastore.h"

START_TEST (first_test)
{
	char** strings;
	fail_unless(insert('a) == 1, "should succeed");
}
END_TEST

int main(void)
{
	Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, sanity_check);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}