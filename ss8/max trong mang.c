#include <stdio.h>
int main(){
    int i,n,max;
    int a[n];
    printf("nhap vao phan tu cua mang");
    scanf("%d",&n);
    for ( i=0; i<n; i++){
        printf("nhap phan thu thu %d :",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("gia tri max=%d ",max);
    return 0;
}//
// Created by Admin on 12/11/2023.
//
