#include <iostream>
#include "function.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("test case 1")
{
CHECK(f(10, 2) == 12);
CHECK(f(5, 5) == 10);
}