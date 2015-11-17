#include <stdio.h>
#include <criterion/criterion.h>

void
setup(void)
{
  puts("Runs before the test");
}

void
teardown(void)
{
  puts("Runs after the test");
}
