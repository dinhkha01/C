#include <stdio.h>
int main(){
    double dtbh,hh;
    printf("nhap doanh thu ban hang: ");
    scanf("%lf",&dtbh);
    if (dtbh<=100){
        hh= 0.05*dtbh;
        printf("hoa hong cua ban la; %lf",hh);
    } else if(dtbh>100 && dtbh<=300){
        hh= 0.1*dtbh;
        printf("hoa hong cua ban la; %lf\n",hh);
    } else if (dtbh>300){
        printf("hoa hong cua ban la; %lf\n",hh);
    }
    return 0;
}