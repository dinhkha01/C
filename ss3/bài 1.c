#include <stdio.h>
int main (){

    const double Pi=3.14,r;
    printf("nhap ban kinh r la : ");
    scanf ("%lf",&r);
    printf("chu vi hinh tron la: %.2lf dien tich hinh tron la: %.2lf", r*Pi*2, r*r*Pi);
    return 0;
}