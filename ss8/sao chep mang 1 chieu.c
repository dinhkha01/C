#include <stdio.h>
#include <string.h>
int main(){
    int data1[5]={1,2,3,5,6,};
    int data2[5];
    memcpy((void*)data2,(void*)data1, sizeof(data1));

    for (int i=0; i<5; i++) {
        printf("%d ", data2[i]);
    }
    return 0;
}