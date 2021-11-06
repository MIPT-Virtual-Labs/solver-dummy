#include <assert.h>
#include <stdlib.h>
#include <stdio.h>


int factorial(int n) {
    int i = 0, result = 1;
    for (i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    assert(n >= 1);
    printf("%d", factorial(n));
    return 0;
}
