#include <stdio.h>

void nhapmang(int *a, int n){
    for (int i = 0; i < n; ++i) {
        printf("a[%d]: ",i);
        scanf("%d",a+i);
    }
}
void inmang(int *a, int n){
    for (int i = 0; i < n; ++i) {
        printf("%d ",*(a+i));
    }
}
int main(){
    int n,a[100];
    scanf("%d",&n);
    nhapmang(a,n);
    inmang(a,n);
    return 0;
}