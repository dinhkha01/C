#include <stdio.h>
int main(){
    int a;
    int b;
    double nghiem;
    printf("nhap he so a = ");
    scanf("%d", &a);
    printf("nhap he so b = ");
    scanf("%d", &b);
    printf("phuong trinh sau khi nhap: %dx + %d = 0",a,b);
    if(a == 0) {
        if(b == 0) {
            printf("\n-> phuong trinh tren co vo so nghiem\n");
        } else {
            printf("\n-> phuong trinh tren vo nghiem\n");
        }
    }
    else {
        nghiem = (double)-b/a;
        printf("\n-> phuong trinh tren co nghiem la: x = %.2f\n",nghiem);
    }
    return 0;
}
//
// Created by Admin on 12/1/2023.
//
