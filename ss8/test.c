#include <stdio.h>
int main(){
    int i, a[5];
    printf("nhap vao 5 so\n");
    for(i=0;i<5;i++){
        printf("phan thu thu %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("cac so da nhap la: \n");
    for ( i=0; i<5; i++){
        printf("%d ",a[i]);
    }
    return 0;
}