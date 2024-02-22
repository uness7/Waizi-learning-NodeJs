#include <stdio.h>

// Define the inner function
int multiplyBy2(int num) {
    return num * 2;
}

// Define the outer function
int (*createFunction())(int) {
    // Return a function pointer
    return &multiplyBy2;
}

int main() {
    // Create a function pointer and assign it the result of createFunction
    int (*generatedFunc)(int) = createFunction();

    // Call the function using the function pointer
    int result = (*generatedFunc)(3); // 6

    printf("%d\n", result);

    return 0;
}

