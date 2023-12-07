#include <stdio.h>
int main(){
    int i,sum;
    for (i=1;i<=10;i++){
        sum+=i;
        printf("%d\n",sum);
    }printf("tong la %d",sum);
    return 0;
}