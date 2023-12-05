#include <stdio.h>



int main() {
    int namSinh;
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &namSinh);

    // Lấy năm hiện tại

    // Tính tuổi
    int tuoi = 2023 - namSinh;

    printf("Tuoi cua ban la: %d\n", tuoi);

    // Kiểm tra tuổi là chẵn hay lẻ
    if (tuoi % 2 == 0) {
        printf("Tuoi cua ban la so chan.\n");
    } else {
        printf("Tuoi cua ban la so le.\n");
    }

    return 0;
}