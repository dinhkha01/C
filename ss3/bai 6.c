#include <stdio.h>
int main (){
    int n,t;
    printf("nhap nam sinh cua ban: ");
    scanf("%d",&n);
    t= 2023-n;
    printf("Tuoi cua ban la: %d\n", t);
    if (t % 2 == 0) {
        printf("Tuoi cua ban la so chan.\n");
    } else {
        printf("Tuoi cua ban la so le.\n");
    }

    return 0;
}