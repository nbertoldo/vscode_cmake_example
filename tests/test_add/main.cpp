#include <checker.hpp>
#include <MultiplyClass.hpp>
#include <AddClass.hpp>
int main() {
    AddClass adder{};
    CHECK( adder.doit(32,3), 35 )
    test_result();

}