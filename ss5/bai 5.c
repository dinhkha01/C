#include <stdio.h>
int main(){
    int day,month;
    printf("nhap vao ngay : ");
    scanf("%d",&day);
    printf("nhap vao thang : ");
    scanf("%d",&month);
    if (day>=21 && month==3 || day<=20 && month==4){
        printf("bach duong");
    } else if (day>=21 && month==4 || day<=20 && month==5){
        printf("kim nguu ");
    } else if (day>=21 && month==5 || day<=21 && month==6){
        printf("song tu ");
    } else if (day>=22 && month==6 || day<=22 && month==7) {
        printf("cu giai ");
    } else if (day>=23 && month==7 || day<=22 && month==8) {
        printf("su tu ");
    } else if (day>=23 && month==8 || day<=22 && month==9) {
        printf("xu nu ");
    } else if (day>=23 && month==9 || day<=23 && month==10) {
        printf("thien binh ");
    } else if (day>=24 && month==10 || day<=22 && month==11) {
        printf("bo cap ");
    } else if (day>=23 && month==11 || day<=21 && month==12) {
        printf("nhan ma ");
    } else if (day>=22 && month==12 || day<=19 && month==1) {
        printf("ma ket ");
    } else if (day>=20 && month==1 || day<=19 && month==1) {
        printf("bao binh ");
    } else if (day>=19 && month==2 || day<=20 && month==3) {
        printf("song ngu ");
    }
    return 0;
}