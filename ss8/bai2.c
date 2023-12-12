#include <stdio.h>
int main (){
    int x,y;
    int sum=0;
    printf("nhap chieu doc cua mang: ");
    scanf("%d",&y);
    printf("nhap hang ngang cua mang: ");
    scanf("%d",&x);
    printf("nhap cac phan tu trong mang:");
    int a[y][x];
    for(int i=0; i<y; i++){
        for( int j=0; j<x; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("cac phan tu co gia tri chan la : \n");
    for (int i=0; i<y; i++){
        for( int j=0; j<x; j++) {
            if (a[i][j]%2==0){
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
    }
    printf("\ntong cac so chan la : %d",sum);
    return 0;
}