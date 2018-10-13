#include <iostream>
#include <dlfcn.h>


int main(int argc, char* argv[]) {
    void *hndl = dlopen("./sharedlibrary/libsometype.so", RTLD_NOW);
    if(hndl == NULL){
        std::cerr << dlerror() << std::endl;
        exit(-1);
    }
    void *mkr = dlsym(hndl, "maker");

    return 0;
}
