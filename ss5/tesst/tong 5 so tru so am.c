#include <stdio.h>
int main(){
    int i, sum=0;
    int num;
    for(i=1; i<6; i++){
        printf("nhap num:");
        scanf("%d",&num);
        if (num<0){
            continue;
        } else {
            sum+=num;
        }
    }
    printf("sum=%d",sum);
}