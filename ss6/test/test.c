#include <stdio.h>
int main(){
    int sum,n;
    printf("nhap 4 so");
    scanf("%d",&n);
     sum=0;
    while (n>0){
        sum+=n%10;
        n/=10;
    }
    printf("tong la: %d",sum);
}