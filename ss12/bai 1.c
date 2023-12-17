#include <stdio.h>
void capthu1(int a, int b){
    printf("cap thu nhat: \n");
    if (a<b){
        printf(" %d + %d= %d ",a,b,a+b);
        printf("\n");
        printf(" %d - %d= %d ",b,a,b-a);
    } else {
        printf(" %d + %d= %d ",a,b,a+b);
        printf("\n");
        printf(" %d - %d= %d ",a,b,a-b);
    }
}
void capthu2(int b, int c){
    printf("\ncap thu hai: \n");
    if(b<c){
        printf(" %d + %d= %d ",b,c,b+c);
        printf("\n");
        printf(" %d - %d= %d ",c,b,c-b);
    } else{
        printf(" %d + %d= %d ",b,c,b+c);
        printf("\n");
        printf(" %d - %d= %d ",b,c,b-c);
    }
}
void capthu3(int a, int c){
    printf("\ncap thu ba: \n");
    if(a<c){
        printf(" %d + %d= %d ",a,c,a+c);
        printf("\n");
        printf(" %d - %d= %d ",c,a,c-a);
    } else{
        printf(" %d + %d= %d ",a,c,a+c);
        printf("\n");
        printf(" %d - %d= %d ",a,c,a-c);
    }
}
int main(){
    int a,b,c;
    printf(" nhap 3 so a,b,c:\n ");
    scanf("%d %d %d",&a,&b,&c);
    capthu1(a,b);
    capthu2(b,c);
    capthu3(a,c);
    return 0;
}


