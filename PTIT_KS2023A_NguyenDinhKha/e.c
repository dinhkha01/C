#include <stdio.h>
#include <stdbool.h>

void phim2(int n, int a[]){
    printf("cac so da nhap vao mang la:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("\n");
}
double phim3(int a[],int n){
    int sum=0 ,sochia=0;
    for (int i = 0; i < n; ++i) {
        if ( a[i]>0){
            sum+=a[i];
            sochia++;
        }

    }return (double) sum/sochia ;
}
void phim4(int a[],int n, int k){
    printf("nhap so can tim : ");
    scanf("%d",&k);
    for (int i = 0; i < n; ++i){
        if (a[i]==k){
            printf("%d nam o vi tri a[%d]  \n",k,i);
        }
    }
    printf("\n");
}
void phim5(int a[],int n){
    int temp;
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("mang da sap xep la: ");
    for (int i=n-1; i>=0 ; i--){
        printf(" %d ",a[i]);
    }
}
int songuyento(int n){
    if( n<=1)
        return false;
    for(int i=2;i * i<=n ; ++i){
        if(n%i==0)
            return false;
    }
    return true;
}
int phim6( int a[], int n){
    int sn=0;
    for (int i=0; i<n; ++i){
        if(songuyento(a[i])){
            sn++;
        }
    }
    return sn;
}
// Hàm sắp xếp mảng theo yêu cầu
void sapXepMang(int arr[], int n) {
    int chanChiaHetCho3[n], leChiaHetCho3[n], khac[n];
    int demChan = 0, demLe = 0, demKhac = 0;

    // Phân loại các phần tử trong mảng
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 3 == 0 && arr[i] % 2 == 0) {
            chanChiaHetCho3[demChan++] = arr[i];
        } else if (arr[i] % 3 == 0) {
            leChiaHetCho3[demLe++] = arr[i];
        } else {
            khac[demKhac++] = arr[i];
        }
    }

    // Sắp xếp các phần tử đã phân loại
    for (int i = 0; i < demChan - 1; ++i) {
        for (int j = i + 1; j < demChan; ++j) {
            if (chanChiaHetCho3[i] > chanChiaHetCho3[j]) {
                int temp = chanChiaHetCho3[i];
                chanChiaHetCho3[i] = chanChiaHetCho3[j];
                chanChiaHetCho3[j] = temp;
            }
        }
    }

    for (int i = 0; i < demLe - 1; ++i) {
        for (int j = i + 1; j < demLe; ++j) {
            if (leChiaHetCho3[i] < leChiaHetCho3[j]) {
                int temp = leChiaHetCho3[i];
                leChiaHetCho3[i] = leChiaHetCho3[j];
                leChiaHetCho3[j] = temp;
            }
        }
    }

    for (int i = 0; i < demKhac - 1; ++i) {
        for (int j = i + 1; j < demKhac; ++j) {
            if (khac[i] > khac[j]) {
                int temp = khac[i];
                khac[i] = khac[j];
                khac[j] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep la:\n");
    for (int i = 0; i < demChan; ++i) {
        printf(" %d ", chanChiaHetCho3[i]);
    }

    for (int i = 0; i < demKhac; ++i) {
        printf(" %d ", khac[i]);
    }
    for (int i = 0; i < demLe; ++i) {
        printf(" %d ", leChiaHetCho3[i]);
    }
    printf("\n");
}
void phim8(int a[], int *n, int m) {
    int i;
    // Tìm vị trí để chèn giá trị m
    for (i = *n - 1; i >= 0 && a[i] < m; i--) {
        a[i + 1] = a[i];
    }
    a[i + 1] = m;
    (*n)++;  // Tăng số phần tử của mảng sau khi chèn

}

int main() {
    int n, so, k, m;
    int a[100];
    do {
        printf("1. Nhap gia tri n phan tu cua mang (n nhap tu ban phim)\n");
        printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Tinh trung binh cac phan tu duong (>0) trong mang\n");
        printf("4. In ra vi tri (chi so) cac phan tu co gia tri bang k trong mang (k nhap tu ban phim)\n ");
        printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
        printf("6. Tinh so luong cac phan tu la so nguyen to trong mang\n");
        printf("7. Sap xep cac phan tu chan chia het cho 3 o đau mang theo thu tu tang dan, cac phan tu le chia het cho 3 ở cuoi mang theo thu tu giam dan,cac phan tu con lai o giua mang theo thu tu tang dan \n");
        printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan) đung vi tri \n");
        printf("9. Thoat\n");
        printf("moi nhap so de chon chuc nang:");
        scanf("%d", &so);
        switch (so) {
            case 1:
                printf("Nhap do dai cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu a[%d]: ", i + 1);
                    scanf("%d", &a[i]);
                }
                break;
            case 2:
                phim2(n, a);
                break;
            case 3:
                printf("trung binh cac so nguyen lon hon 0 la :%lf \n", phim3(a, n));
                break;
            case 4:
                phim4(a, n, k);
            case 5:
                phim5(a, n);
                break;
            case 6:
                printf("so luong so nguyen to co trong mang la %d\n", phim6(a, n));
                break;
            case 7:
                sapXepMang(a, n);
                break;
            case 8:
                phim5(a, n);
                printf("Nhap gia tri m: ");
                scanf("%d", &m);
                phim8(a, &n, m);
                phim5(a,n);
                printf("\n");
                break;

        }

    }while (so != 9);
    return 0;
}