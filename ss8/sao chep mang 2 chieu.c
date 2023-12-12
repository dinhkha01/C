#include <stdio.h>
#include <string.h>
int main(){
    int bin1[2][5]={
            {1,2,3,4,5},
            {2,3,3,6,7}
    };
    int bin2[2][5];
    memcpy((void*)bin2,(void *)bin1, sizeof(bin1));
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++) {
            printf("%d ", bin2[i][j]);
        }
        printf("\n");
    }
    return 0;
}