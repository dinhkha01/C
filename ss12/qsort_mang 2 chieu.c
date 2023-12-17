#include <stdio.h>
#include <stdlib.h>
int a[2][4]={1,5,3,9,
             8,3,2,8};
int  sosanh(const void*a, const void*b){
    return (*(int*)a - *(int*)b);
}
int main(){
    for (int i=0; i<2;i++){
        for (int j=0; j<4; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    qsort(a,8,sizeof(int),sosanh);
    printf("mang da sap xep la: \n");
    for (int i=0; i<2;i++){
        for (int j=0; j<4; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}


