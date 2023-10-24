#include <iostream>

/** if we add tabs on the source file git hooks will deny the commit*/
int main() {

    std::cout << "Hello World" << std::endl;

//tabs is here

    return 0;
}

// mkdir build
// cd build
// cmake -S ../ -B .
// make
// or cmake -S . -B build/, make -C build/