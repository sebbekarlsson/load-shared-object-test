#include "includes/SomeType.hpp"


SomeType::SomeType() : AST() {};

SomeType::~SomeType() {};

void SomeType::call() {
    std::cout << "hello sometype" << std::endl;
}

extern "C" AST* create(/* should match constructor */) {
    return new SomeType();
}

extern "C" void destroy(AST* p) {
    //delete p;
}
