#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    float duration;
    char content[100];
    bool status;
} CDlist;
void in(CDlist cd[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("CD thu %d: %d %s %.2f %s - %s   ", i + 1, cd[i].id, cd[i].name, cd[i].duration,
               cd[i].content, cd[i].status ? "San co" : "Da cho thue");
    }
    printf("\n");
}
void themMoiCD(CDlist cd[], int *n) {
    printf("\nNhap thong tin CD moi:\n");
    printf("nhap id : ");
    scanf("%d", &cd[*n].id);
    printf("Ten CD: ");
    scanf(" %[^\n]s", cd[*n].name);
    printf("Thoi luong (phut): ");
    scanf("%f", &cd[*n].duration);
    printf("Noi dung: ");
    scanf(" %[^\n]s", cd[*n].content);
    cd[*n].status = true;
    (*n)++;
    printf("Them CD moi thanh cong!\n\n");
}
void nhapthongtinmoi(CDlist cd[], int n, char m[]) {
    int i;
    printf("moi nhap ten cd muon chinh sua: ");
    scanf(" %[^\n]s", m);
    for (i = 0; i < n; ++i) {
        if (strcmp(m, cd[i].name) == 0) {
            printf("Nhap thong tin moi cho CD %s:\n", cd[i].name);
            printf("Ten CD: ");
            scanf(" %[^\n]s", cd[i].name);
            printf("Thoi luong (phut): ");
            scanf("%f", &cd[i].duration);
            printf("Noi dung: ");
            scanf(" %[^\n]s", cd[i].content);
            printf("Cap nhat CD thanh cong!\n\n");
            break;
        }
    }
    if (i == n) {
        printf("Khong tim thay ten CD  \n\n");
    }
}
void xoaCD(CDlist cd[], int *n, char m[]) {
    printf("Nhap ten CD muon xoa: ");
    scanf(" %[^\n]s", m);
    int i;
    for (i = 0; i < *n; ++i) {
        if (strcmp(cd[i].name, m) == 0) {
            for (int j = i; j < *n - 1; ++j) {
                cd[j] = cd[j + 1];
            }
            (*n)--;
            printf("Xoa CD thanh cong!\n\n");
            break;
        }
    }
    if (i == *n) {
        printf("Khong tim thay CD co ten \"%s\"\n\n", m);
    }
}
void sapXepCDs(CDlist cd[], int n, CDlist key) {
    for (int i = 1; i < n; ++i) {
        key = cd[i];
        int j = i - 1;
        while (j >= 0 && cd[j].duration > key.duration) {
            cd[j + 1] = cd[j];
            j = j - 1;
        }
        cd[j + 1] = key;
    }
    printf("Danh sach CD sau khi sap xep:\n");
    in(cd, n);
}
void timKiemNhiPhanCD(CDlist cd[], int n) {
    char tenCD[50];
    printf("Nhap ten CD can tim kiem: ");
    scanf(" %[^\n]s", tenCD);
    int trai = 0, phai = n - 1;
    int timThayIndex = -1;
    while (trai <= phai) {
        int giua = trai + (phai - trai) / 2;
        if (strcmp(cd[giua].name, tenCD) == 0) {
            timThayIndex = giua;
            break;
        } else if (strcmp(cd[giua].name, tenCD) < 0) {
            trai = giua + 1;
        } else {
            phai = giua - 1;
        }
    }
    if (timThayIndex != -1) {
        printf("Thong tin CD tim thay:\n");
        printf("CD %d: %s - %.2f phut - %s - %s\n",
               cd[timThayIndex].id, cd[timThayIndex].name, cd[timThayIndex].duration,
               cd[timThayIndex].content, cd[timThayIndex].status ? "San co" : "Da cho thue");
    } else {
        printf("Khong tim thay CD co ten \"%s\"\n\n", tenCD);
    }
}
void timkiemtrangthai(CDlist cd[], int n, int a) {
    printf("nhap trang thai ban muon tim (1: San co, 0: Da cho thue):");
    scanf("%d", &a);
    for (int i = 0; i < n; ++i) {
        if (a == cd[i].status) {
            printf("CD %d: %s - %.2f - %s - %s\n",
                   cd[i].id, cd[i].name, cd[i].duration,
                   cd[i].content, cd[i].status ? "San co" : "Da cho thue");
        }
    }
}
int main() {
    int so, a;
    char m[100];
    CDlist cd[100] = {
            {111, "hihi", 8.3, "vui ve", true},
            {112, "huhu", 9.3, "buon", true}
    };
    int n = 2;
    CDlist key;
    do {
        printf("\n************************MENU**************************\n");
        printf("1. In toan bo danh sach CD\n");
        printf("2. Them moi CD\n");
        printf("3. Cap nhat thong tin cd qua ten\n");
        printf("4. Xoa cd bang ten \n");
        printf("5. Xap xep tang dan cua thoi luong CD\n");
        printf("6. Tim kiem theo ten CD bang he nhi phan :\n");
        printf("7. Tim kiem CD theo trang thai \n");
        printf("0. Thoat\n");
        printf("Nhap chuc nang: ");
        scanf("%d", &so);
        switch (so) {
            case 1:
                in(cd, n);
                break;
            case 2:
                themMoiCD(cd, &n);
                break;
            case 3:
                nhapthongtinmoi(cd, n, m);
                break;
            case 4:
                xoaCD(cd, &n, m);
                break;
            case 5:
                sapXepCDs(cd, n, key);
                break;
            case 6:
                timKiemNhiPhanCD(cd, n);
                break;
            case 7:
                timkiemtrangthai(cd, n, a);
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    } while (so != 0);
    return 0;
}
