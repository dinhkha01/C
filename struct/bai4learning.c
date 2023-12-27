
#include <stdio.h>
#include <string.h>

typedef struct {
    char maSach[50];
    char tenSach[50];
    // Thêm các thông tin khác của sách nếu cần
} Book;

Book books[100];
int soLuongSach = 0;

void nhapSach() {
    printf("Nhap so luong sach: ");
    scanf("%d", &soLuongSach);
    for (int i = 0; i < soLuongSach; i++) {
        printf("Nhap ma sach: ");
        scanf("%s", books[i].maSach);
        printf("Nhap ten sach: ");
        scanf("%s", books[i].tenSach);
        // Nhập các thông tin khác của sách nếu có
    }
}

void hienThiSach() {
    for (int i = 0; i < soLuongSach; i++) {
        printf("Ma sach: %s\n", books[i].maSach);
        printf("Ten sach: %s\n", books[i].tenSach);
        // Hiển thị các thông tin khác của sách nếu có
    }
}

void themSach(int viTri) {
    if (viTri < 0 || viTri > soLuongSach) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = soLuongSach; i > viTri; i--) {
        strcpy(books[i].maSach, books[i - 1].maSach);
        strcpy(books[i].tenSach, books[i - 1].tenSach);
        // Sao chép các thông tin khác của sách nếu có
    }
    printf("Nhap ma sach: ");
    scanf("%s", books[viTri].maSach);
    printf("Nhap ten sach: ");
    scanf("%s", books[viTri].tenSach);
    // Nhập các thông tin khác của sách nếu có
    soLuongSach++;
}

void xoaSach(char* maSach) {
    int viTri = -1;
    for (int i = 0; i < soLuongSach; i++) {
        if (strcmp(books[i].maSach, maSach) == 0) {
            viTri = i;
            break;
        }
    }
    if (viTri == -1) {
        printf("Khong tim thay sach!\n");
        return;
    }
    for (int i = viTri; i < soLuongSach - 1; i++) {
        strcpy(books[i].maSach, books[i + 1].maSach);
        strcpy(books[i].tenSach, books[i + 1].tenSach);
        // Sao chép các thông tin khác của sách nếu có
    }
    soLuongSach--;
}

int main() {
    int luaChon;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1:
                nhapSach();
                break;
            case 2:
                hienThiSach();
                break;
            case 3:
                printf("Nhap vi tri muon them sach: ");
                int viTri;
                scanf("%d", &viTri);
                themSach(viTri);
                break;
            case 4:
                printf("Nhap ma sach muon xoa: ");
                char maSach[50];
                scanf("%s", maSach);
                xoaSach(maSach);
                break;
            case 5:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (luaChon != 5);
    return 0;
}
