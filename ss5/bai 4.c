#include <stdio.h>
int main() {
    int ttn, thue, luong;
    printf("nhap thu nhap nhan vien");
    scanf("%d", &ttn);
    if (ttn > 0 && ttn <= 5000) {
        thue = ttn * 0.05;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 5000 && ttn <= 10000) {
        thue = ttn * 0.1;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 10000 && ttn <= 18000) {
        thue = ttn * 0.15;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 18000 && ttn <= 32000) {
        thue = ttn * 0.2;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 32000 && ttn <= 52000) {
        thue = ttn * 0.25;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 52000 && ttn <= 80000) {
        thue = ttn * 0.3;
        luong = ttn - thue;
        printf("luong = %d", luong);
    } else if (ttn > 80000) {
        thue = ttn * 0.35;
        luong = ttn - thue;
        printf("luong = %d", luong);
    }
    return 0;
}
