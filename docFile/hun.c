#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

typedef struct {
    char maSach[6];
    char name[max];
    char tacGia[max];
    char theLoai[max];
    int gia;
} book;

void menu();
void add(book a[], int *n);
void in(book a[], int n);
void ghiDuLieuVaoFile(book a[], int n);
void capNhatThongTinSach(book a[], int n);
void xoaSachTheoID(book a[], int *n);
void sapxep(book a[], int n);
void timKiemSachTheoTacGia(book a[], int n);

int main() {
    int key, n = 0;
    book a[max];
    do {
        menu();
        printf("chuc nang ban muon chon (1-8): ");
        scanf("%d", &key);
        switch (key) {
            case 1:
                add(a, &n);
                break;
            case 2:
                capNhatThongTinSach(a, n);
                break;
            case 3:
                xoaSachTheoID(a, &n);
                break;
            case 4:
                in(a, n);
                break;
            case 5:
                sapxep(a, n);
                break;
            case 6:
                timKiemSachTheoTacGia(a, n);
                break;
        }
    } while (key != 8);
    return 0;
}

void menu() {
    printf("CHUONG TRINH QUAN LY SACH C/C++\n");
    printf("*************************MENU**************************\n");
    printf("**  1. Them sach.                                    **\n");
    printf("**  2. Cap nhat thong tin sach boi ID.               **\n");
    printf("**  3. Xoa sach boi ID.                              **\n");
    printf("**  4. Hien thi thong tin sach.                      **\n");
    printf("**  5. Sap xep sach theo gia.                        **\n");
    printf("**  6. Tim kiem sach theo ten tac gia.               **\n");
    printf("**  7. Tim kiem sach theo khoang gia.                **\n");
    printf("**  8. Thoat.                                        **\n");
    printf("*******************************************************\n");
}

void add(book a[], int *n) {
    printf("nhap vao do dai cua thu vien sach: ");
    scanf("%d", n);
    getchar();  // Đọc và loại bỏ ký tự '\n' thừa trong buffer

    for (int i = 0; i < *n; ++i) {
        printf("nhap thong tin sach thu %d: \n", i + 1);

        // Ma Sach
        printf("Ma Sach (5 ky tu): ");
        fgets(a[i].maSach, sizeof(a[i].maSach), stdin);
        a[i].maSach[strcspn(a[i].maSach, "\n")] = '\0';  // Loại bỏ ký tự '\n' cuối chuỗi

        // Ten Sach
        printf("Ten Sach: ");
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        // Tac Gia Sach
        printf("Tac gia Sach: ");
        fgets(a[i].tacGia, sizeof(a[i].tacGia), stdin);
        a[i].tacGia[strcspn(a[i].tacGia, "\n")] = '\0';

        // The Loai Sach
        printf("The loai Sach: ");
        fgets(a[i].theLoai, sizeof(a[i].theLoai), stdin);
        a[i].theLoai[strcspn(a[i].theLoai, "\n")] = '\0';

        // Gia Sach
        do {
            printf("Gia Sach: ");
            scanf("%d", &a[i].gia);
            if (a[i].gia < 1000) {
                printf("Gia sach khong hop le moi nhap lai: \n");
            }
        } while (a[i].gia < 1000);

        getchar();  // Đọc và loại bỏ ký tự '\n' thừa trong buffer
    }
}

void in(book a[], int n) {
    printf("%-20s%-20s%-20s%-20s%-10s\n", "masach", "Tensach", "tacgia", "theloai", "gia");
    for (int i = 0; i < n; ++i) {
        printf("%-20s%-20s%-20s%-20s%-10d\n", a[i].maSach, a[i].name, a[i].tacGia, a[i].theLoai, a[i].gia);
    }
    ghiDuLieuVaoFile(a, n);
}

void ghiDuLieuVaoFile(book *a, int n) {
    FILE *fp = fopen("book.txt", "w");
    if (fp != NULL) {
        for (int i = 0; i < n; i++) {
            fprintf(fp, "%s, %s, %s, %d, %s\n",
                    a[i].maSach, a[i].name, a[i].tacGia,
                    a[i].gia, a[i].theLoai);
        }
        fclose(fp);
    }
}

void capNhatThongTinSach(book a[], int n) {
    char maSach[6];
    printf("Nhap ma sach can cap nhat: ");
    fgets(maSach, sizeof(maSach), stdin);
    maSach[strcspn(maSach, "\n")] = '\0';  // Loại bỏ ký tự '\n' cuối chuỗi

    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].maSach, maSach) == 0) {
            printf("Nhap thong tin sach moi: \n");

            // Ten sach
            printf("Ten sach: ");
            fgets(a[i].name, sizeof(a[i].name), stdin);
            a[i].name[strcspn(a[i].name, "\n")] = '\0';

            // Tac gia
            printf("Tac gia: ");
            fgets(a[i].tacGia, sizeof(a[i].tacGia), stdin);
            a[i].tacGia[strcspn(a[i].tacGia, "\n")] = '\0';

            // The loai
            printf("The loai: ");
            fgets(a[i].theLoai, sizeof(a[i].theLoai), stdin);
            a[i].theLoai[strcspn(a[i].theLoai, "\n")] = '\0';

            // Gia sach
            do {
                printf("Gia sach: ");
                scanf("%d", &a[i].gia);
                if (a[i].gia < 1000) {
                    printf("Gia sach khong hop le, moi nhap lai: \n");
                }
            } while (a[i].gia < 1000);

            printf("Cap nhat thong tin sach thanh cong!\n");
            return;
        }
    }
    printf("Khong tim thay sach voi ma sach da nhap!\n");
}

void xoaSachTheoID(book a[], int *n) {
    char maSach[6];
    printf("Nhap ma sach can xoa: ");
    fgets(maSach, sizeof(maSach), stdin);
    maSach[strcspn(maSach, "\n")] = '\0';  // Loại bỏ ký tự '\n' cuối chuỗi

    int i;
    for (i = 0; i < *n; i++) {
        if (strcmp(a[i].maSach, maSach) == 0) {
            break;
        }
    }

    if (i != *n) { // Nếu tìm thấy sách
        for (int j = i; j < *n - 1; j++) {
            a[j] = a[j + 1];
        }
        (*n)--;
        printf("Da xoa sach co ma %s\n", maSach);
    } else {
        printf("Khong tim thay sach voi ma sach da nhap!\n");
    }
}

void timKiemSachTheoTacGia(book a[], int n) {
    char tacGia[max];
    printf("Nhập tên tác giả cần tìm: ");
    fgets(tacGia, sizeof(tacGia), stdin);
    tacGia[strcspn(tacGia, "\n")] = '\0';  // Loại bỏ ký tự '\n' cuối chuỗi

    printf("%-20s%-20s%-20s%-20s%-10s\n", "masach", "Tensach", "tacgia", "theloai", "gia");
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].tacGia, tacGia) == 0) {
            printf("%-20s%-20s%-20s%-20s%-10d\n", a[i].maSach, a[i].name, a[i].tacGia, a[i].theLoai, a[i].gia);
        }
    }
}
