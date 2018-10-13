#ifndef SOME_TYPE_H
#define SOME_TYPE_H
#include <string>
#include <iostream>
#include "../../../src/includes/AST.hpp"

class SomeType: public AST {
    public:
        SomeType();
        ~SomeType();

        void call();
};
#endif
