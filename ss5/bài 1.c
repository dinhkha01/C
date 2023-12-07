#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
double x1,x2,n;
    printf("nhap vao phuong trinh 2x^2+bx+c=0\n");
    printf("nhap 3 so a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    n=b*b-4*a*c;
    if (a==0){
        printf("so nhap vao pt khong hop le");
    } else if(n<0){
        printf("pt vo no");
    } else if (n==0){
        x1=-(b/2*a);
        x2=-(b/2*a);
        printf("pt co nghiem kep:%lf %lf",x1,x2) ;
    } else if (n>0){
        x1=(-(b)+sqrt(n)/(2*a));
        x2=(-(b)-sqrt(n)/(2*a));
        printf("pt co 2 no phan biet: %lf %lf",x1,x2);
    }
    return 0;
}