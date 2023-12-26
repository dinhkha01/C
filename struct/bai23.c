#include <stdio.h>
typedef struct {
    char ten[100];
    double doc;
    int sodan,tongthunhap;
}thanhpho;
void sosanhdoc(thanhpho a[], int n ){
    int c;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j <n ; ++j) {
            if(a[i].doc < a[j].doc){
                c= j ;
           }
        }
    }
    printf("thanh pho co ti le biet doc cao nhat la : %s\n",a[c].ten);
}
void sosanhtn(thanhpho a[], int n ){
    int e;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n ; ++j) {
            if(a[i].tongthunhap < a[j].tongthunhap){
                e = j ;
            } else e=i ;
        }
    }
    printf("thanh pho co thu nhap cao nhat la : %s ",a[e].ten);
}
int main(){
    int n;
    printf("nha so thanh pho : ");
    scanf("%d",&n);
    thanhpho a[n];
    for (int i = 0; i < n; ++i) {
        printf("nhap chi tiet thanh pho thu %d\n",i);
        printf("nha ten thanh pho: ");
        scanf("%s",a[i].ten);
        printf("nhap tong so dan: ");
        scanf("%d",&a[i].sodan);
        printf("nhap ti le biet doc viet: ");
        scanf("%lf",&a[i].doc);
        printf("nhap tong thu nhap: ");
        scanf("%d",&a[i].tongthunhap);
    }
    sosanhdoc(a,n);
    sosanhtn(a,n);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 1ce6a5ff71a8949b934b6efdbd892d00d28417f4
