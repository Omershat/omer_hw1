#include "stack.h"
#include <iostream>

int main() {
    Stack stack;
    initStack(&stack);

    std::cout << "testing:\n";

    
    if (isEmpty(&stack)) {
        std::cout << "stack is empty.\n";
    }

    // Push functions
    std::cout << "Pushing values\n";
    push(&stack, 54);
    push(&stack, 43);
    push(&stack, 2);

    // Pop values from the stack
    std::cout << "pop\n";
    int value = pop(&stack);
    while (value != -1) {
        std::cout << value << " ";
        value = pop(&stack);
    }
    std::cout << "\n";

    // Clean up the stack
    cleanStack(&stack);
    std::cout << "Stack cleaned up.\n";

    return 0;
}
