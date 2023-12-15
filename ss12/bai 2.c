#include <stdio.h>
void capsothu1(int a ,int b){
    printf("%d * %d= %d\n",a,b,a*b);
    if (a<=b & b%a==0){
        printf("%d chia het cho %d\n",b,a);
    } else {
        printf("%d khong chia het cho %d\n",b,a);
    }

}
void capsothu2(int b, int c) {
    printf("%d * %d= %d\n", b, c, b * c);
    if (b < c ) {
        printf("%d / %d = %d\n", c, b, c / b);
    } else {
        printf("%d / %d = %d\n", b, c, b / c);
    }
}
void capsothu3(int a, int c) {
    printf("%d * %d= %d\n", a, c, a * c);
    if (a < c ) {
        printf("%d / %d = %d\n", c, a, c / a);
    } else {
        printf("%d / %d = %d\n", a, c, a / c);
    }
}

int main(){
    int a,b,c;
    printf("nhap 3 so a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    capsothu1(a,b);
    capsothu2(b,c);
    capsothu3(a,c);
    return 0;
}