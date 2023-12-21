#include <stdio.h>
int main(){
    int n,temp;
    printf("nhap vao do dai cua mang");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    printf("mang sau khi duoc sap xep tang dan la\n");
    for (int i = 0; i <n; ++i) {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("mang sau khi duoc sap xep giam dan la");
    for (int i = n-1; i >=0; i--) {
        printf("%d ",a[i]);
    }
    return 0;
}