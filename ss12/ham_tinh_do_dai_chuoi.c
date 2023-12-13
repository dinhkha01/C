#include <stdio.h>
#include <string.h>
int main(void){
    char str[100];
    printf("nhap chuoi ky tu : ");
    scanf(" %s",str);
    int len=strlen(str);
    printf("do dai ky tu : %d",len);

}