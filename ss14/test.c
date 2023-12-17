#include <stdio.h>
int main() {
    int a[10];//a[0]
    int *b = a;
    int sum = 0;

    printf("Nhap 10 so nguyen:");
    for (int i = 0; i < 10; i++)
    {
        
        scanf_s("%d", b + i);// b = a[0]
    }
    for (int i = 0; i < 10; i++) {
        sum += *(b + i);
    }
    printf("Tong cac phan tu mang la: %d\n", sum);
    return 0;
}