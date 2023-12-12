#include <stdio.h>
int main (){
    int x,y,i,j;
    printf("nhap vao do dai doc :");
    scanf("%d",&y);
    printf("nhap vao do dai ngang :");
    scanf("%d",&x);
    int bang_diem[y][x];
    printf("nhap vao phan tu trong mang");
    for (i=0; i<y; i++){
        for ( j=0; j<x; j++){
            scanf("%d",&bang_diem[i][j]);
        }
    }
    for (i=0; i<y; i++) {
        for (j = 0; j < x; j++) {
            printf("%d   ", bang_diem[i][j]);
        }
        printf("\n");
    }
    return 0;
}