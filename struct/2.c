#include <stdio.h>

typedef struct {
    char ten[20];
    double chieucao;
}SS;


int main(){
   SS a[3]={
           {"Tanh",1.80},
           {"Kha",1.90},
           {"Trung,1.86",18.3}
   };
   double TC=0,TB=0;
    for (int i = 0; i < 3; ++i) {
        TC += a[i].chieucao;
    }
    TB= TC/3;
    printf("chieu cao trung binh la : %lf",TB);
    return 0;
}