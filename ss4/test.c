#include <stdio.h>

int main() {

    double luongcoban,ngaycongtt,bn,ngaycong;

    printf("Nhap luong co ban: ");
    scanf("%lf",&luongcoban);
    printf("Nhap ngay cong thuc te: ");
    scanf("%lf",&ngaycongtt);
    ngaycong =26;
    // Tinh luong :
    if (ngaycongtt>ngaycong){
        bn= (luongcoban*(1.5*(ngaycongtt-ngaycong)/ngaycong));
        printf ("tien luong nhan vien: %.2lf",luongcoban*((ngaycong/ngaycong)+bn));
    }else {
        printf("luong nhan vien: %.2lf",luongcoban*(ngaycongtt/ngaycong));
    }
    return 0;


}