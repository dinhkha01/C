#include <stdio.h>

int laTamGiacCan(float a, float b, float c) {
    if (a + b > c && b + c > a && a + c > b) {
        if (a == b || b == c || a == c) {
            return 1; // Đây là tam giác cân
        }
    }
    return 0; // Không phải là tam giác cân
}

int main() {
    float a, b, c;

    // Nhập vào ba cạnh của tam giác
    printf("Nhập cạnh a: ");
    scanf("%f", &a);
    printf("Nhập cạnh b: ");
    scanf("%f", &b);
    printf("Nhập cạnh c: ");
    scanf("%f", &c);

    // Kiểm tra và in kết quả
    if (laTamGiacCan(a, b, c)) {
        printf("Đây là tam giác cân.\n");
    } else {
        printf("Đây không phải là tam giác cân.\n");
    }

    return 0;
}