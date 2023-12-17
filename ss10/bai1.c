#include <stdio.h>
#include <math.h>
int doisangsobatphan(int n){
    int tp=0 ,i=0, temp, bp=0 ;
    while (n!=0){
        temp = n % 10;
        n /= 10;
        tp+= temp * pow(2,i);
        i++;
    }
    i=1;
    while (tp!=0){
        bp+= ( tp % 8 )*i;
        tp/=8;
        i*=10;
    }
    return bp;
}
int main() {
    // Add your code in here:
    int n;
    printf("nhap vao so nhi phan can chuyen : ");
    scanf("%d",&n);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    printf("so thap phan la : %d",doisangsobatphan(n));
    // Write your output here:
    return 0;
}