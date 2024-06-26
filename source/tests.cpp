#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"
#include "box.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

TEST_CASE("S&B volume,area", "[S&B volume,area]"){
    Sphere sphere{{4.0,3.0,1.5},3.45};
    Box box{{5.3,4.7,8.5},{7.3,5.2,9.8}};
    REQUIRE(sphere.area()==Approx(149.57).margin(0.1));
    REQUIRE(sphere.volume()==Approx(172.00691).margin(0.01));
    REQUIRE(box.area()==Approx(8.5).margin(0.1));
    REQUIRE(box.volume()==Approx(1.3).margin(0.1));

}