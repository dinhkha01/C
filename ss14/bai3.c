#include <stdio.h>
void nhapmang(int a[], int n){
    printf("nhap do dai cua mang : ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("a[%d]",i+1);
        scanf("%d",&a[i]);
    }
}

int main() {
    int so,a[100],n;
    do {
        printf("nhap vao chuc nang");
        scanf("%d",&so);
        switch (so) {
            case 1:
                nhapmang(a,n);
                break;
        }
    } while (so!=7);
    return 0;
}