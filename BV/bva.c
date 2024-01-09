#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max 100

typedef struct {
    char maSach[6];
    char name[max];
    char tacGia[max];
    char theLoai[max];
    int gia;
} book;

void menu();
void chuanHoa(char *name);
void add(book a[], int *n);
void in(book a[], int n);
void ghiDuLieuVaoFile(book a[], int n);
void capNhatThongTinSach(book a[], int n);
void xoaSachTheoID(book a[], int *n);
void sapXepGiam(book a[], int n);
void sapXepTang(book a[], int n);
void timKiemSachTheoTacGia(book a[], int n);
void timKiemSachTheoKhoangGia(book a[], int n);
void xoaDuLieu();
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
                ghiDuLieuVaoFile(a, n);
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
                sapXepGiam(a,n);
                break;
            case 6:
                sapXepTang(a, n);
                break;
            case 7:
                timKiemSachTheoTacGia(a, n);
                break;
            case 8:
                timKiemSachTheoKhoangGia(a,n);
                break;
            case 9:
                xoaDuLieu();
                break;
            case 10:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Chon chuc nang khong hop le. Vui long chon lai.\n");
        }
    } while (key != 10);
    return 0;
}

void menu() {
    printf("CHUONG TRINH QUAN LY SACH C/C++\n");
    printf("*************************MENU**************************\n");
    printf("**  1. Them sach.                                    **\n");
    printf("**  2. Cap nhat thong tin sach boi ID.               **\n");
    printf("**  3. Xoa sach boi ID.                              **\n");
    printf("**  4. Hien thi thong tin sach.                      **\n");
    printf("**  5. Sap xep sach theo gia giam dan.               **\n");
    printf("**  6. Sap xep sach theo gia tang dan.               **\n");
    printf("**  7. Tim kiem sach theo ten tac gia.               **\n");
    printf("**  8. Tim kiem sach theo khoang gia.                **\n");
    printf("**  9. Xoa du lieu file book.txt.                    **\n");
    printf("**  10. Thoat.                                       **\n");
    printf("*******************************************************\n");
}



void chuanHoa(char *name) {
    int i;
    int chuDau = 1;

    for (i = 0; i < strlen(name); i++) {
        if (isspace(name[i])) {
            chuDau = 1;  // Đặt lại khi gặp dấu cách
        } else {
            if (chuDau) {
                if (isalpha(name[i])) {
                    name[i] = toupper(name[i]);  // Chuyển thành chữ hoa
                } else {
                    name[i] = ' ';  // Nếu là ký tự đặc biệt, thì thay thế bằng khoảng trắng
                }
                chuDau = 0;  // Đặt lại để tránh chuyển tiếp các ký tự
            } else {
                if (isalpha(name[i])) {
                    name[i] = tolower(name[i]);  // Chuyển thành chữ thường
                } else {
                    name[i] = ' ';  // Nếu là ký tự đặc biệt, thì thay thế bằng khoảng trắng
                }
            }
        }
    }
}
void ghiDuLieuVaoFile(book a[], int n) {
    FILE *fp = fopen("book.txt", "a");
    if (fp != NULL) {
            fprintf(fp,"\n| %-10s | %-18s | %-13s | %-13s | %-13s |\n", "Ma sach", "Ten sach", "Tac gia", "Gia tien", "The loai");
            fprintf(fp,"|---------------------------------------------------------------------------------|\n");
            for (int i = 0; i < n; i++) {
                fprintf(fp,"| %-10s | %-18s | %-13s | %-13d | %-13s |\n",
                        a[i].maSach,
                        a[i].name,
                        a[i].tacGia,
                        a[i].gia,
                        a[i].theLoai);
            }
        fclose(fp);
    }
}
void add(book a[], int *n) {
    int continueAdding;
    do {
        printf("Nhap vao thong tin sach:\n");

        // Nhập mã sách (đúng 5 ký tự)
        do {
            printf("Ma Sach (5 ky tu): ");
            fflush(stdin);
            scanf("%s", a[*n].maSach);
            fflush(stdin);  // Loại bỏ ký tự '\n' thừa trong buffer
        } while (strlen(a[*n].maSach) != 5);

        // Nhập tên sách (từ 10 ký tự trở lên)
        do {
            printf("Ten Sach (10 ky tu tro len): ");
            fflush(stdin);
            fgets(a[*n].name, sizeof(a[*n].name), stdin);
            a[*n].name[strcspn(a[*n].name, "\n")] = '\0';
        } while (strlen(a[*n].name) < 10);


        chuanHoa(a[*n].name);

        printf("Tac gia Sach: ");
        fflush(stdin);
        fgets(a[*n].tacGia, sizeof(a[*n].tacGia), stdin);
        a[*n].tacGia[strcspn(a[*n].tacGia, "\n")] = '\0';
        chuanHoa(a[*n].tacGia);
        printf("The loai Sach: ");
        fflush(stdin);
        fgets(a[*n].theLoai, sizeof(a[*n].theLoai), stdin);
        a[*n].theLoai[strcspn(a[*n].theLoai, "\n")] = '\0';
        chuanHoa(a[*n].theLoai);
        // Nhập giá sách (>= 1000)
        do {
            printf("Gia Sach (>= 1000): ");
            scanf("%d", &a[*n].gia);
            getchar();  // Loại bỏ ký tự '\n' thừa trong buffer
        } while (a[*n].gia < 1000);

        // Ghi dữ liệu vào file sau mỗi lần thêm sách


        (*n)++;

        printf("Ban co muon tiep tuc them sach? (1: Co, 0: Khong): ");
        scanf("%d", &continueAdding);
        getchar();  // Loại bỏ ký tự '\n' thừa trong buffer

    } while (continueAdding == 1);
}


void in(book a[], int n) {
    printf("%-20s%-20s%-20s%-20s%-10s\n", "masach", "Tensach", "tacgia", "theloai", "gia");
    for (int i = 0; i < n; ++i) {
        printf("%-20s%-20s%-20s%-20s%-10d\n", a[i].maSach, a[i].name, a[i].tacGia, a[i].theLoai, a[i].gia);
    }
}


void capNhatThongTinSach(book a[], int n) {
    char maSach[6];
    printf("Nhap ma sach can cap nhat: ");
    fflush(stdin);
    fgets(maSach, sizeof(maSach), stdin);
    maSach[strcspn(maSach, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].maSach, maSach) == 0) {
            printf("Nhap thong tin sach moi:\n");
            fflush(stdin);
            do {
                printf("Ten Sach (10 ky tu tro len): ");
                fflush(stdin);
                fgets(a[i].name, sizeof(a[i].name), stdin);
                a[i].name[strcspn(a[i].name, "\n")] = '\0';
            } while (strlen(a[i].name) < 10);
            chuanHoa(a[i].name);
            printf("Tac gia: ");
            fflush(stdin);
            fgets(a[i].tacGia, sizeof(a[i].tacGia), stdin);
            a[i].tacGia[strcspn(a[i].tacGia, "\n")] = '\0';
            chuanHoa(a[i].tacGia);
            printf("The loai: ");
            fflush(stdin);
            fgets(a[i].theLoai, sizeof(a[i].theLoai), stdin);
            a[i].theLoai[strcspn(a[i].theLoai, "\n")] = '\0';
            chuanHoa(a[i].theLoai);
            do {
                printf("Gia Sach (>= 1000): ");
                scanf("%d", &a[i].gia);
                getchar();  // Loại bỏ ký tự '\n' thừa trong buffer
            } while (a[i].gia < 1000);


            printf("Cap nhat thong tin sach thanh cong!\n");
            ghiDuLieuVaoFile(a, n);
            return;
        }
    }
    printf("Khong tim thay sach voi ma sach da nhap!\n");
}

void xoaSachTheoID(book a[], int *n) {
    char maSach[6];
    printf("Nhap ma sach can xoa: ");
    fflush(stdin);
    fgets(maSach, sizeof(maSach), stdin);
    maSach[strcspn(maSach, "\n")] = '\0';

    int i;
    for (i = 0; i < *n; i++) {
        if (strcmp(a[i].maSach, maSach) == 0) {
            break;
        }
    }

    if (i != *n) {
        for (int j = i; j < *n - 1; j++) {
            a[j] = a[j + 1];
        }
        (*n)--;
        printf("Da xoa sach co ma %s\n", maSach);
        ghiDuLieuVaoFile(a, *n);
    } else {
        printf("Khong tim thay sach voi ma sach da nhap!\n");
    }
}

void sapXepTang(book a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j].gia > a[j+1].gia) {
                book temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    in(a,n);
}

void sapXepGiam(book a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j].gia < a[j+1].gia) {
                book temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    in(a,n);
}

void timKiemSachTheoTacGia(book a[], int n) {
    char tacgia[max];
    printf("Nhap ten tac gia can tim kiem: ");
    scanf(" %[^\n]", tacgia);

    int found = 0;
    printf("\nKet qua tim kiem theo tac gia '%s':\n", tacgia);
    for (int i = 0; i < n; i++) {
        if (strstr(a[i].tacGia, tacgia) != NULL) {
            printf("%s | %s | %s | %s | %d\n", a[i].maSach, a[i].name,
                   a[i].tacGia, a[i].theLoai, a[i].gia);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong tim thay sach cua tac gia '%s'\n", tacgia);
    }
}

void timKiemSachTheoKhoangGia(book a[], int n) {
    int giaMin, giaMax;
    printf("Nhap gia thap nhat: ");
    scanf("%d", &giaMin);
    printf("Nhap gia cao nhat: ");
    scanf("%d", &giaMax);

    int found = 0;
    printf("\nKet qua tim kiem trong khoang gia %d-%d:\n", giaMin, giaMax);
    for (int i = 0; i < n; ++i) {
        if (a[i].gia >= giaMin && a[i].gia <= giaMax) {
            printf("%s | %s | %s | %s | %d\n", a[i].maSach, a[i].name,
                   a[i].tacGia, a[i].theLoai, a[i].gia);
            found = 1;
        }
    }

    if (!found) {
        printf("Trong khoang gia nay khong tim thay sach nao!!!\n");
    }
}
void xoaDuLieu() {
    FILE *file = fopen("book.txt", "w");

    if (file != NULL) {
        fclose(file);
        printf("Da xoa du lieu trong file book.txt.\n");
    } else {
        printf("Khong the mo file de xoa du lieu.\n");
    }
}