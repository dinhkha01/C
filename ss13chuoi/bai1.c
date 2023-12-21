#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    int so;
    char a[100];
    do{
        printf("nhap chuc nang :");
        scanf("%d",&so);
        switch (so) {
            case 1:
                printf("nhap vao chuoi ki tu\n");
                scanf("%s",a);
                break;
            case 2:
                printf("do dai chuoi vua nhap la :%d\n", strlen(a));
                printf("chuoi vua nhap la : %s\n",a);
                break;
            case 3:
                printf("chuoi dao nguoc la: ");
                for (int i = strlen(a)-1; i >=0; --i) {
                    printf("%c",a[i]);
                }
                printf("\n");
                break;
            case 4:{
                int dem;
                for (int i = 0; i < strlen(a); ++i) {
                    if(isalpha(a[i])){
                        dem++;
                    }
                }
                printf("so luong chu cai trong chuoi la:%d\n ",dem);
                break;
            }
            case 5:{
                int dem=0;
                for (int i = 0; i < strlen(a); ++i) {
                    if(isdigit(a[i])){
                        dem++;
                    }
                }
                printf("so luong chu so la: %d\n",dem);
                break;
            }
            case 6:{
                int dem=0;
                for (int i = 0; i < strlen(a); ++i) {
                    if(ispunct(a[i])){
                        dem++;
                    }
                }
                printf("so luong ki tu dac biet la: %d\n",dem);
                break;
            }
            case 7:
                printf("bai bai");
            }
    }while( so !=7);
    return 0;
}