#include <stdio.h>
int sum(int n){
    if(n!=0){
        return n + sum(n-1);
    } else{
        return n;
    }
}
int main(){
    int tong,number;
    printf("nhap n: ");
    scanf("%d",&number);
    tong= sum(number);
    printf("sum=%d ",tong);
    return 0;
}

