#include <stdio.h>
#include <string.h>
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
    memcpy( (void*)b, (void*)a , n* sizeof(int ) );
}

void hoandoimang(int a[], int b[], int n){
    int temp[100];
    for (int i = 0; i < n; ++i) {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }
}
void daonguocmang( int a[], int n){
    int temp;
    for (int i = 0; i < n/2; ++i) {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    inmang(a,n);
}
void timkiem(int a[],int n, int k){

    for (int i = 0; i < n; ++i) {
        if(a[i]==k){
            printf("ki tu %d nam o vi tri thu a[%d] \n",k,i);
            return;
        }
    }
    printf("khong tim thay ki tu da nhap\n");
}
int main() {
    int so,n,a[100],b[100],k;
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
                break;
            case 4:
                nhapmang(b,&n);
                hoandoimang(a,b,n);
                inmang(a,n);
            case 5:
                daonguocmang(a,n);
                break;
            case 6:
                printf("moi nhap ki tu muon tim");
                scanf("%d",&k);
                timkiem(a,n,k);
                break;
            case 7:
                printf("bai bai !!!\n");
                break;
            default:
                printf("moi nhap lai:\n");
        }
    } while (so!=7);
    return 0;
}