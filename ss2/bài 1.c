#include <stdio.h>
int main (){
  int edge=2,length=2,width=2,radius=2;
   const double PI=3.14;
   printf("chu vi hinh vuong la: %d dien tich hinh vuong la: %d\n", edge*4, edge*edge);
    printf("chu vi hinh chu nhat la: %d dien tich chu nhat la: %d\n", (length+width)*2, length*width);
    printf("chu vi hinh tron la: %.2lf dien tich hinh tron la: %.2lf\n",radius*2*PI , radius*radius*PI);
    return 0;
}
