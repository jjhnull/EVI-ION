#include <stdio.h>

void hello() {
    printf("Hello!\n");
}

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(2, 3);
    printf("Result: %d\n", result);
    hello();
    return 0;
}
