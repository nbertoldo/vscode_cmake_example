#include <checker.hpp>
#include <MultiplyClass.hpp>
#include <AddClass.hpp>
int main() {
    MultiplyClass mu{};
    CHECK( mu.doit(32,3), 96 )
    test_result();

}