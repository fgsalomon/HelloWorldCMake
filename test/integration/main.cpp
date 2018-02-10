#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "greeter.h"
#include "repeater.h"

TEST_CASE( "Empty greeter greets", "[greeter]" ) {
    Greeter greeter("world");
    Repeater repeater(greeter.greet(), 2);
    CHECK(repeater.repeat() == "Hello world!\nHello world!\n");
}
