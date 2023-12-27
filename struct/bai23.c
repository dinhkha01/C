#include <stdio.h>
typedef struct {
    char ten[100];
    double doc;
    int sodan,tongthunhap;
}thanhpho;
void sosanhdoc(thanhpho a[], int n ){
    int doc=0;
    for (int i = 1; i < n; ++i) {
       if(a[doc].doc < a[i].doc){
           doc=i;
       }
    }
    printf("thanh pho co ti le biet doc cao nhat la : %s\n",a[doc].ten);
}
void sosanhtn(thanhpho a[], int n ){
    int thunhap=0;
    for (int i = 1; i < n; ++i) {
        if(a[thunhap].tongthunhap < a[i].tongthunhap){
            thunhap = i;
        }
    }
    printf("thanh pho co thu nhap cao nhat la : %s ",a[thunhap].ten);
}
int main() {
    int n;
    printf("nha so thanh pho : ");
    scanf("%d", &n);
    thanhpho a[n];
    for (int i = 0; i < n; ++i) {
        printf("nhap chi tiet thanh pho thu %d\n", i);
        printf("nha ten thanh pho: ");
        getchar();
        gets(a[i].ten);
        printf("nhap tong so dan: ");
        scanf("%d", &a[i].sodan);
        printf("nhap ti le biet doc viet: ");
        scanf("%lf", &a[i].doc);
        printf("nhap tong thu nhap: ");
        scanf("%d", &a[i].tongthunhap);
    }
    sosanhdoc(a, n);
    sosanhtn(a, n);
    return 0;
}
