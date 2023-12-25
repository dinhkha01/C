#include <stdio.h>
#include <stdbool.h>

bool isFibonacci(int n) {
    if (n == 0) {
        return true;
    }
    int a = 0, b = 1, c = a + b;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return c == n;
}

int main() {
    int a[4][4] = {
            {3, 1, 0, 7},
            {2, 5, 10, 3},
            {3, 7, 4, 1},
            {10, 2, 0, 3}
    };
    printf("Cac so fibonacci : ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (isFibonacci(a[i][j])) {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
