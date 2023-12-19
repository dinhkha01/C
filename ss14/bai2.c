#include <stdio.h>
int main(){
    int a=3,b=4,temp,sum=0;
    int *c,*d;
    c=&a;
    d=&b;
    sum= *c - *d;
    printf("hieu cua 2 so ban dau la: %d\n",sum);
    temp=*c;
    *c=*d;
    *d=temp;
    sum= *c - *d;
    printf("hieu cua 2 so sau khi doi cho la: %d\n",sum);

    return 0;
}