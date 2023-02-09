//sub w parameters


#include <stdio.h>

int subtract(int *a, int *b) {
    return *a - *b;
}

int main() {
    int x = 10, y = 20;
    int result = subtract(&x, &y);
    printf("The difference between %d and %d is %d\n", x, y, result);
    return 0;
}
