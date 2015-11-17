#include <stdio.h>
#include <criterion/criterion.h>

#include "testee.h"

Test(misc, failing, .init = setup, .fini = teardown) {
  cr_assert(0);
}

Test(misc, passing) {
  cr_assert(1);
}
