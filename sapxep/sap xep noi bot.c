#include <stdio.h>
int main(){
    int i,j,temp,a[4]={4,2,1,6,};
    for (i=0; i<3; i++){
        for (j=0; j<3-i-1; j++){
            if ( a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("mang da sap xep la: ");
    for (i=0; i<=4-1; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
