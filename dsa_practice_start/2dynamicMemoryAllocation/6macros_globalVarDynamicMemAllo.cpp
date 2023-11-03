#include <iostream>
#include <memory>

#define MAX_SIZE 100 // Macro for maximum size

int* globalPtr;  
void allocateMemory() {
    globalPtr = new int[MAX_SIZE]; // Dynamically allocate memory using global variable
}

void freeMemory() {
    delete[] globalPtr; 
    globalPtr = nullptr; // Reset the pointer to null
}

int main() {
    allocateMemory();  
    // Access and use globalPtr
    for (int i = 0; i < MAX_SIZE; ++i) {
        globalPtr[i] = i;
    }

    freeMemory();

    // Using smart pointers for dynamic memory allocation
    std::unique_ptr<int[]> smartPtr(new int[MAX_SIZE]);

    // Access and use smartPtr
    for (int i = 0; i < MAX_SIZE; ++i) {
        smartPtr[i] = i * 2;
    }

    // Memory deallocation handled by smart pointer automatically
    // smartPtr goes out of scope here

    return 0;
}
