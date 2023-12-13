#include <stdio.h>
int main(){
    int n;
    printf("nhap so do dai cua mang: ");
    scanf("%d",&n);
    int number[n];
    for (int i=0; i<n; i++){
        printf("number[%d] la :",i);
        scanf("%d",&number[i]);
    }
    int findnumber,sum=0;
    printf("nhap gia tri findNumber: \n");
    scanf("%d",&findnumber);
    for (int i=0; i<n; i++){
        if(number[i]==findnumber){
            printf(" chi so phan tu %d la:%d\n",findnumber,i);
            sum+=number[i];
        }
    }
    printf("tong cua phan tu la: %d",sum);
    return 0;
}