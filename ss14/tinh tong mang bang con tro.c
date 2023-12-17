#include <stdio.h>
int main (){
    int a[5];
    int *ptr=a;
    int sum=0;
    printf("nhap 5 so nguyen vao mang : \n");
    for ( int i=0; i<5; i++){
        scanf("%d",ptr+i);// &a[i]=prt+i  // hướng tới vị trí của mảng i tức là a[0];
    }
    printf("so phan tu da nhap vao mang la :\n");
    for ( int i=0; i<5; i++){
        printf ("  %d ", *(ptr+i));// a[i]= *(ptr+i)// hướng tới giá trị của vị trí i của mảng
    }

    for ( int i =0; i<5; i++ ){
        sum+=*(ptr+i);
    }
    printf ("\n tong cua cac phan tu da nhap la: %d", sum);

    return 0;
}