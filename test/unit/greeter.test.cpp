#include "greeter.h"
#include "catch.hpp"

TEST_CASE( "Empty greeter greets", "[greeter]" ) {
  Greeter greeter;
  CHECK(greeter.greet() == "Hello !");
}

TEST_CASE( "Greeter greets Segismundo", "[greeter]" ) {
  Greeter greeter("Segismundo");
  CHECK(greeter.greet() == "Hello Segismundo!");
}
