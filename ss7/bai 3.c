#include<stdio.h>
int main(){
    double t,l,st,ls1t,tl1t,tlct,tl;
    printf("nhap so tien gui: ");
    scanf("%lf",&t);
    printf("lai suat nam: ");
    scanf("%lf",&l);
    printf("nhap so thang: ");
    scanf("%lf",&st);
    ls1t=(l/100)/12;
    tl1t=ls1t*t;
    tlct=tl1t*st;
    tl=tlct+t;
    printf("tien lai la : %lf",tl);
    return 0;
}