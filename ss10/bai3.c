#include <stdio.h>
int bolimdrome(int n){
    int sum=0;
    int  temp;
    int ss=n;
    while (n!=0){
        temp=n%10;
        sum=(sum*10)+temp;
        n/=10;
    }
    return ss==sum;
}
int main() {
    // Add your code in here:
    int a;
    printf("nhap so nguyen de kiem tra co phai bolimdromr hay khong :");
    scanf("%d",&a);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    if(bolimdrome(a)){
        printf(" %d la so bolimdrome ",a);
    } else {
        printf("%d khong la so bolimdrome ",a);
    }
    // Write your output here:
    return 0;
}
