#include <stdio.h>
#include <strings.h>
int main(){
  char a[100],b[100];
    printf("nhap vao chuoi a: ");
    gets(a);
    printf("nhap vao chuoi b: ");
    gets(b);
    char *ptra = a,*ptrb = b;
    int dodaia = strlen(ptra);
    int dodaib = strlen(ptrb);
    printf("do dai chuoi a la : %d\n", dodaia);
    printf("do dai chuoi b la : %d\n", dodaib);
    if(dodaia > dodaib){
        printf("chuoi co do dai lon hon la: %s",ptra);
    } else if(dodaib>dodaia){
        printf("chuoi co do dai lon hon la: %s",ptrb);
    } else {
        printf("hai chuoi co do dai bang nhau");
    }

    return 0;
}