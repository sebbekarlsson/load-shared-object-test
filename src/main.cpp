#include <iostream>
#include <dlfcn.h>
#include "includes/DLClass.hpp"
#include "includes/AST.hpp"


int main(int argc, char* argv[]) {
    auto someType = new DLClass<AST>("./sharedlibrary/libsometype.so");


    std::shared_ptr<AST> my_ast = someType->make_obj(3);
    my_ast->call();

    return 0;
}
