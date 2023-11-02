#include <iostream>
#include "mySharedLib.h"

extern "C" {
    void printHello() {
        // std::cout << "Hello from shared library!" << std::endl;
        printf("Hello from shared library!\n");
    }
}