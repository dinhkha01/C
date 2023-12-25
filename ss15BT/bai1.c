#include <stdio.h>
#include <stdbool.h>

bool isFibonacci(int n) {
    int a = 0, b = 1, c = a + b;
    if (n==0) return true;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return c == n;
}

int main() {
    int m,n;
    printf("nhap so dong");
    scanf("%d",&m);
    printf("nhap so cot");
    scanf("%d",&n);
    int a[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("Cac so fibonacci : ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (isFibonacci(a[i][j])) {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
