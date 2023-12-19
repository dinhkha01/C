#include <stdio.h>
#include <stdbool.h>

bool laSoNguyenTo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void hienThiMang(int n, int m, int a[100][100]) {
    printf("Cac so da nhap vao mang la:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int demSoLeChiaHetCho5(int n, int m, int a[][100]) {
    int dem = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] % 2 != 0 && a[i][j] % 5 == 0) {
                dem++;
            }
        }
    }
    return dem;
}

void hienThiMinMaxTrenBienVaCheo(int a[100][100], int n, int m) {
    int max = a[0][0], min = a[0][0];
    printf("Cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1 || i == j || i + j == n - 1) {
                if (a[i][j] > max) {
                    max = a[i][j];
                }
                if (a[i][j] < min) {
                    min = a[i][j];
                }
            }
        }
    }
    printf("Max: %d\nMin: %d\n", max, min);
}

void sapXepGiamDanTheoDong(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (a[i][j] < a[i][k]) {
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    hienThiMang(n, m, a);
}

int tongCacSoNguyenTo(int a[100][100], int n, int m) {
    int tong = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (laSoNguyenTo(a[i][j])) {
                tong += a[i][j];
            }
        }
    }
    return tong;
}

void sapXepCheoPhuTangDan(int a[][100], int n, int m) {
    int cheoPhu[100];
    int k = 0;

    for (int i = 0; i < n; i++) {
        cheoPhu[k++] = a[i][m - 1 - i];
    }

    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int temp = a[i][n - i - 1];
        while (j >= 0 && a[j][n - j - 1] > temp) {
            a[j + 1][n - j - 2] = a[j][n - j - 1];
            j--;
        }
        a[j + 1][n - j - 2] = temp;
    }

    k = 0;
    for (int i = 0; i < n; i++) {
        a[i][m - 1 - i] = cheoPhu[k++];
    }
}

void chenMangMotChieuVaoMangHaiChieu(int a[][100], int n, int m, int b[], int cotChen) {
    for (int i = 0; i < n; i++) {
        for (int j = m; j > cotChen; j--) {
            a[i][j] = a[i][j - 1];
        }
        a[i][cotChen] = b[i];
    }
}

void nhapMangMotChieu(int b[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("b[%d]", i);
        scanf("%d", &b[i]);
    }
}

void hienThiMenu() {
    printf(" ************************MENU**************************\n");
    printf("1. Nhap gia tri cac phan tu cua mang)\n");
    printf("2. In gia tri cac phan tu trong mang theo ma tran \n");
    printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang \n");
    printf("4. In ra cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo chinh, duong cheo phu \n");
    printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan cua mang\n");
    printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
    printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan\n");
    printf("8. nhap gia tri mot mang 1 chieu gom n phan tu va chi so cot muon chen vao mang,thuc hien chen vao mang 2 chieu \n");
    printf("9. Thoat\n");

}

int main() {
    int n, m, so;
    int a[100][100];
    int b[100];

    do {
        hienThiMenu();
        printf("Moi nhap so de chon chuc nang: ");
        scanf("%d", &so);

        switch (so) {
            case 1:
                printf("Nhap so hang n: ");
                scanf("%d", &n);
                printf("Nhap so cot m: ");
                scanf("%d", &m);
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Nhap phan tu thu a[%d][%d]: ", i, j);
                        scanf("%d", &a[i][j]);
                    }
                }
                break;

            case 2:
                hienThiMang(n, m, a);
                break;

            case 3:
                printf("So luong so le chia het cho 5 la: %d\n", demSoLeChiaHetCho5(n, m, a));
                break;

            case 4:
                hienThiMinMaxTrenBienVaCheo(a, n, m);
                break;

            case 5:
                printf("Mang sau khi sap xep giam dan theo dong:\n");
                sapXepGiamDanTheoDong(a, n, m);
                break;

            case 6:
                printf("Tong cac so nguyen to la: %d\n", tongCacSoNguyenTo(a, n, m));
                break;

            case 7:
                printf("Mang sau khi sap xep duong cheo phu tang dan:\n");
                sapXepCheoPhuTangDan(a, n, m);
                hienThiMang(n, m, a);
                break;

            case 8:
                printf("nhap do dai mang 1 chieu:  ");
                scanf("%d", &n);
                nhapMangMotChieu(b, n);

                int cotChen;
                printf("nhap cot muon chen: ");
                scanf("%d", &cotChen);

                chenMangMotChieuVaoMangHaiChieu(a, n, m, b, cotChen);
                printf("mang sau khi chen la: \n");
                hienThiMang(n, m, a);
                break;

            case 9:
                printf("Thoat chuong trinh !!! \n");
                break;

            default:
                printf("chuc nang khong dung. Vui long chon lai.\n");
        }
    } while (so != 9);

    return 0;
}
