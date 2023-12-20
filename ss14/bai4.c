#include <stdio.h>
void nhapmang(int a[], int *n){
    printf("nhap do dai cua mang : ");
    scanf("%d",n);
    for (int i = 0; i < *n; ++i) {
        printf("a[%d]",i+1);
        scanf("%d",a+i);
    }
}
void inmang(int a[], int n){
    for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void saochepmang(int a[], int b[], int n){
    for (int i = 0; i < n; ++i) {
        b[i]=a[i];
    }
}

int main() {
    int so,n,a[100],b[100];
    do {
        printf("nhap vao chuc nang");
        scanf("%d",&so);
        switch (so) {
            case 1:
                nhapmang(a,&n);
                break;
            case 2:
                printf("mang da nhap la: \n");
                inmang(a,n);
                break;
            case 3:
                printf("mang sau khi sao chep la : \n");
                saochepmang(a,b,n);
                inmang(b,n);
        }
    } while (so!=7);
    return 0;
}