//
// Created by Admin on 12/26/2023.
//
#include <stdio.h>
typedef struct {
    double re,im;
}complex;
void addcomplexPtr(complex *x,complex *y, complex *z){
    (*z).re= (*x).re + (*y).re;
    (*z).im= (*x).re + (*y).im;
}
void outcomplexptr(complex z){
    printf("%lf + %lf i",z.re,z.im);
}
int main(){
    complex x={2,4};
    complex y={1.3,4.5};
    complex z;
    complex *p1=&x;
    complex *p2=&y;
    complex *p3=&z;
    addcomplexPtr(p1,p2,p3);
    outcomplexptr(z);
    return 0;
}