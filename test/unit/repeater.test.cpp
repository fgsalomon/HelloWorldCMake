#include "repeater.h"
#include "catch.hpp"

TEST_CASE( "Empty repeater greets", "[repeater]" ) {
  //Repeater repeater;
  //CHECK(repeater.repeat() == "Hello !");
}

TEST_CASE( "Repeater repeats hello twice", "[repeater]" ) {
  Repeater repeater("Hello", 2);
  CHECK(repeater.repeat() == "Hello\nHello\n");
}
