#include<stdio.h>
#include <string.h>
int main() {
    char a[] = "Hello", *p;
    p = a;
  int i;
    for ( i = 0; i < strlen(p); ++i) {
        printf("a[%d] : %d\n",i,a+i);
    }
    return 0;
}