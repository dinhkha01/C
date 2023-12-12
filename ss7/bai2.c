#include <stdio.h>
#include <math.h>

int main() {
    int i, sum, s, n,temp;
    for (n = 100; n <= 999; n++) {
        i = 3;
        sum = 0;
        temp = n;
        while (i > 0) {
            s = temp % 10;
            temp /= 10;
            sum += pow(s, 3);
            i--;
        }
        if (sum == n) {
            printf("%d la so Armstrong.\n", n);
        }
    }

    return 0;
}
