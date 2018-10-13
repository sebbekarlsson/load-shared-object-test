#ifndef X_AST_H
#define X_AST_H


class AST {
    public:
        AST() {};
        virtual ~AST() {};

        virtual void call() = 0;

        typedef AST * create_t(int);
        typedef void destroy_t(AST*);
};

#endif
