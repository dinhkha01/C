#include <stdio.h>
#include <stdlib.h>
int a[5]={3,5,1,2,8};
int sosanh(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}
int main(){
    printf("mang ban dau la :");
    for (int i=0; i<5; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    qsort(a, 5, sizeof(int ),sosanh);
    printf("mang da sap xep la: ");
    for (int i=0; i<5; i++){
        printf(" %d ", a[i]);
    }
    return 0;
}