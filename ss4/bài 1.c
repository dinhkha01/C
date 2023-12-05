#include <stdio.h>
int main (){
    int n;
    printf("nhap so nguyen duong: ");
    scanf("%d", &n);
    if (n%3==0 && n%5==0) {
        printf("chia het cho ca 3 va 5 la: %d", n);
    } else{
        printf ( "khong chia het cho 3 va 5 la: %d",n );
    }
    return 0;
}