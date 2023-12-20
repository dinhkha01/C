#include <stdio.h>

void nhapmang(int a[], int *n) {
    printf("Nhap do dai cua mang: ");
    scanf("%d", n);

    for (int i = 0; i < *n; ++i) {
        printf("a[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void inmang(int a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void saochepmang(int a[], int b[], int n) {
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
}

void doicho2mang(int a[], int b[], int n) {
    for (int i = 0; i < n; ++i) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void daongumang(int a[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

void timkiemkytu(int a[], int n, int kyTu) {
    int dem = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == kyTu) {
            printf("Ky tu %d xuat hien tai vi tri %d\n", kyTu, i + 1);
            dem++;
        }
    }
    if (dem == 0) {
        printf("Khong tim thay ky tu %d trong mang.\n", kyTu);
    }
}

int main() {
    int so, a[100], b[100], n, kyTu;
    int exitProgram = 0; // Biến boolean để kiểm soát vòng lặp

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. In ra mang\n");
        printf("3. Sao chep mang vao mang khac\n");
        printf("4. Nhap vao mang khac, doi cho 2 mang voi nhau\n");
        printf("5. Dao nguoc mang\n");
        printf("6. Nhap vao 1 ky tu, tim kiem ky tu do trong mang\n");
        printf("7. Thoat\n");

        printf("Nhap vao chuc nang (7 de thoat): ");
        scanf("%d", &so);

        switch (so) {
            case 1:
                printf("Nhap mang:\n");
                nhapmang(a, &n);
                break;
            case 2:
                printf("Mang da nhap la:\n");
                inmang(a, n);
                break;
            case 3:
                printf("Mang sau khi sao chep la:\n");
                saochepmang(a, b, n);
                inmang(b, n);
                break;
            case 4:
                printf("Nhap mang khac:\n");
                nhapmang(b, &n);
                printf("Mang sau khi doi cho la:\n");
                doicho2mang(a, b, n);
                inmang(a, n);
                break;
            case 5:
                printf("Mang sau khi dao nguoc la:\n");
                daongumang(a, n);
                inmang(a, n);
                break;
            case 6:
                printf("Nhap ky tu can tim: ");
                scanf("%d", &kyTu);
                timkiemkytu(a, n, kyTu);
                break;
            case 7:
                exitProgram = 1; // Thay doi bien de thoat khoi vong lap
                break;
            default:
                printf("Chuc nang khong hop le!\n");
        }
    } while (!exitProgram);

    return 0;
}
