#include <stdio.h>
int main (){
    double t,v,a,T,TB;
    printf("nhap so diem toan");
    scanf("%d",&t);
    printf("nhap so diem van");
    scanf("%d",&v);
    printf("nhap so diem anh");
    scanf("%d",&a);
    T= t+v+a;
    TB= (t+v+a)/3;
    printf("tong diem la: %.2ld\n  diem trung binh la: %.2ld\n ", T ,TB);

    return 0;
}