#include <stdio.h>
int main(){
    int n,i;
    do {
        printf("nhap so nguyen n: ");
        scanf("%d",&n);
        if (n<1||n>9){
            printf("sai roi xin moi ");
        }
    } while (n<1||n>9);
    printf("bang cuu chuong %d la\n",n);
    for (i=1;i<10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}