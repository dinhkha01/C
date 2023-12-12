#include <stdio.h>
int main(){
    int bang_diem[][3]={
            {1,2,3},
            {9,3,6}
    } ;
    for (int i = 0; i<3;i++){
        printf("%d\n",bang_diem[1][i]);
    }
    return 0;
}