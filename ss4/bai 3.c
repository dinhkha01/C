#include <stdio.h>
int main (){
  float a,b,c;
    printf("nhap so dien dau thang va so dien cuoi thang");
    scanf("%f%f",&a,&b);
    c= b-a;
  if (0<=c && c<50) {
      printf("gia dien la %f\n",10*c);
  } else
      if (50<=c && c<100) {
      printf("tien dien la %f\n",15*c );}
    else if (100 <= c && c< 150)
    {
        printf("tien dien la %f\n",20*c );
    } else if (150 <= c && c< 200)
    {
        printf("tien dien la %f\n",25*c );}
    else if(200 <= c)
    {
        printf("tien dien la %f\n",30*c );
    }

    return 0;
}