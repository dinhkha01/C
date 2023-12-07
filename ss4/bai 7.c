#include <stdio.h>
int main(){
    double lcb,nctte,l,nctt,nd,lnd;
    printf("nhap vao luong co ban:");
    scanf("%lf",&lcb);
    printf("nhap vao ngay cong thuc te:");
    scanf("%lf",&nctte);
    nctt = 26 ;
    if (nctte>=nctt){//nctte=30-26=4
        nd=nctte-nctt;
        lnd=lcb*(1.5*nd/nctt);
        l= lnd+ (lcb*(nctt/nctt));
    } else {
        l= lcb*(nctte/nctt);
    }
    printf("luong cua thang la : %lf",l);
    return 0;
}