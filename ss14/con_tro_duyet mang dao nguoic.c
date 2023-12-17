#include <stdio.h>
int main (){
    int n;
    printf (" nhap vao do dai mang :");
    scanf ("%d",&n);
    int a[n];
    int *ptr=a;
    printf("nhap vao gia tri vao mang  :");
    for ( int i=0; i<n; i++){
        scanf("%d",ptr+i);
    }
    printf("gia tri da nhap :");
    for ( int i=0; i<n; i++){
        printf(" %d ",*(ptr+i));
    }
    printf("\n dao nguoc gia tri cua mang:");
    for (int i=n-1; i>=0; i--){
        printf(" %d ", *(ptr+i) );
    }
    return 0;
}