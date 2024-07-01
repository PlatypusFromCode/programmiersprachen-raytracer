#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "sphere.hpp"
#include "box.hpp"
#include "shape.hpp"
# include <glm/glm.hpp >
# include <glm/gtx/intersect.hpp >

int main(int argc, char *argv[]){
    Color red {255 , 0 , 0};
    glm::vec3 position {0.0f, 0.0f, 0.0f};
    Sphere* s1 = new Sphere { position , 1.2f, red , " sphere0 "};
    Shape* s2 = new Sphere { position , 1.2f, red , " sphere1 "};
    s1->print(std :: cout );
    s2->print(std :: cout );
    delete s1;
    delete s2;
  return Catch::Session().run(argc, argv);

}

TEST_CASE("S&B volume,area", "[S&B volume,area]"){
    Sphere sphere{{4.0f,3.0f,1.5f},3.45,{0,0,0},"onamae"};
    Box box{{5.3f,4.7f,8.5f},{7.3f,5.2f,9.8f},{0,0,0},"onamae"};
    std::cout<<box<<std::endl;
    std::cout<<sphere<<std::endl;
    REQUIRE(sphere.area()==Approx(149.57f).margin(0.1f));
    REQUIRE(sphere.volume()==Approx(172.00691f).margin(0.01f));
    REQUIRE(box.area()==Approx(8.5f).margin(0.1f));
    REQUIRE(box.volume()==Approx(1.3f).margin(0.1f));
}


TEST_CASE ("intersect_ray_sphere", "[intersect]")
{
// Ray
    glm :: vec3 ray_origin {0.0f, 0.0f, 0.0f};
// ray direction has to be normalized !
// you can use :
// v = glm :: normalize ( some_vector )
    glm :: vec3 ray_direction {0.0f, 0.0f, 1.0f};
    Ray ray{ray_origin,ray_direction};
// Sphere
    glm :: vec3 sphere_center {0.0f ,0.0f, 5.0f};
    float sphere_radius {1.0f};
    float distance = 0.0f;
    Sphere sphere{sphere_center,sphere_radius,{0.4f,0.8f,0.3f},"name"};
    auto result = sphere.intersect(ray).t;
    distance=result;
    REQUIRE ( distance == Approx (4.0f));
}