#include <stdio.h>
int main(){
    int a,b,c,min;
    printf("nhap a:");
    scanf ("%d", &a);
    printf("nhap b:");
    scanf ("%d", &b);
    printf("nhap c:");
    scanf ("%d", &c);
    min=a;
    if (a>b) min=b;
    if (b>c) min=c;
    printf("so min la:""%d",min );
    return 0;
}

//
// Created by Admin on 12/1/2023.
//
//
// Created by Admin on 12/1/2023.
//
