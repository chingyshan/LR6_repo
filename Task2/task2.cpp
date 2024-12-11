#include <iostream>
#include "all_functions.h"

int main() {
    while (askToRunProgram()==1) {
        int size=1000;
        display(create(size), size);

        DELETING(create(size), size);
    }
    return 0;
}

