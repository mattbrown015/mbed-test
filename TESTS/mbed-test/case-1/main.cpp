#include "mbed.h"
#include "greentea-client/test_env.h"
#include "unity.h"
#include "utest.h"
#include "rtos.h"

using namespace utest::v1;

void test_success() {
    TEST_ASSERT(true);
}

void test_failure() {
    TEST_ASSERT(false);
}

utest::v1::status_t test_setup(const size_t number_of_cases) {
    // Setup Greentea using a reasonable timeout in seconds
    GREENTEA_SETUP(40, "default_auto");
    return verbose_test_setup_handler(number_of_cases);
}

Case cases[] = {
    Case("Testing success test", test_success),
    Case("Testing failure test", test_failure),
};

Specification specification(test_setup, cases);

int main() {
    return !Harness::run(specification);
}
