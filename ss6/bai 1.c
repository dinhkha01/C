#include <stdio.h>
int main(){
    int i,n;
    do {
        printf("nhap so nguyen n: ");
        scanf("%d",&n);
        if (n<=1||n>=9);
        printf("sai roi,nhap lai ik");

    } while (n<1||n>9);
        printf("bang cuu chuong %d la\n ",n);
        for(i=1;i<=9;i++) {
            printf("%d x %d = %d\n",n,i,n*i);
        }
    return 0;

}