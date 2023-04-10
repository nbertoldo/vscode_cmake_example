#include <iostream>
#include "MultiplyClass.hpp"
#include "AddClass.hpp"

int main(int argc, const char* argv[]) {
    std::cout << "Hello world!" << std::endl;
    if (argc != 3) {
        throw "incorrect number of cli arguments";
    }
    int mult1 = atoi(argv[1]);
    int mult2 = atoi(argv[2]);
    MultiplyClass mu{};
    AddClass adder{};
    int answer = mu.doit(mult1,mult2);
    std::cout << "Multiplication: " << answer << std::endl;
    std::cout << "Addition: " << adder.doit(mult1, mult2) << std::endl;
    return 0;
}