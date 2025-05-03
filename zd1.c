#include <stdio.h>

int i = 0;

int increment() {
    return ++i;
}

int print_values(int a, int b) {
    printf("a = %d, b = %d, i = %d\n", a, b, i);
    return 0;
}

int main() {
    print_values(increment(), increment());
    return 0;
}
