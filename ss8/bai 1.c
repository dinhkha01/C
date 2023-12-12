#include <stdio.h>
int main(){
    int i,n,max,min;
    int a[n];
    printf("nhap so phan thu cua mang ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("nhap so phan tu thu %d : ",i+1);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        } else if (min>a[i]){
            min=a[i];
        }
    }
    printf("max=%d\n min=%d",max,min);

    return 0;
}