#include <iostream>

/// The main entry point of the codebase.
int main(int argc, char *argv[]) {
    std::cout << "Hello world" << std::endl;
    int x = 0;
    x += 1;
    std::cout << "Argument count: " << argc << std::endl;
    std::cout << "Here's a number: " << x << std::endl;

    std::cout << "New print" << std::endl;
    std::cout << "Add another print" << std::endl;

    std::cout << "New print (rebased)" << std::endl;
}

void function_from_old_commit() {
    std::cout << "Does nothing fancy" << std::endl;
}
