#include <stdio.h>
int main (){
    int a=2,*ptr;
    ptr = &a;
    printf("dia chi cua con tro la: %p\n",ptr);
    printf("gia tri cua con tro la: %d",*ptr);
    return 0;
}