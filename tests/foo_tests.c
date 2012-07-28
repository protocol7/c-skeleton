#include "minunit.h"

char *test_succeed() {
  printf("succeed");
  return NULL;
}

char *test_fail() {
  printf("fail");
  return "fail";
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_succeed);
    mu_run_test(test_fail);

    return NULL;
}

RUN_TESTS(all_tests);
