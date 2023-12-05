#include <stdio.h>

int main() {
    int dv,c,t,n,sum,s;
    printf("nhap so co 4 chu so: ");
    scanf("%d",&s);
    n=s/1000;
    t=(s%1000)/100;
    c=s%1000%100/10;
    dv=s%1000%100%10;
    sum= dv+c+t+n;
    printf("tong cua so da nhap la: %d\n ",sum);
    printf("so dao nguoc cua so da nhap la: %d%d%d%d",dv,c,t,n);
    return 0;
}