#include <stdio.h>
int main (){
    float a,b,c,A,B,C,a2,b2,c2;
    printf("nhap 3 canh cua tam giac a, b, c");
    scanf("%f%f%f",&a,&b,&c);
    A= b+c;B= a+c;C= a+b;
    c2=(a*a)+(b*b); b2=(a*a)+(c*c); a2=(c*c)+(b*b);
if (A>a,B>b,C>c) {
    if (a == b && a == c) {
        printf("la tam giac deu\n");
    } else if (a == b || b == c || a == c) {
        printf("la tam giac can\n");
    } else if (c2 == c * c || b2 == b * b || a2 == a * a) {
        printf("la tam giac vuong\n");
    }
    if (a == b || a == c || b == c) {
        if (c2 == c * c || b2 == b * b || a2 == a * a) {
            printf("la tam giac vuong can\n");}
        }

} else {
    printf("la tam giac thuong\n"); }
    return 0;
}