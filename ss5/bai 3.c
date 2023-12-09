#include <stdio.h>
int main(){
    int sophut,thanhtien,thuebaothang;
    printf("nhap so phut");
    scanf("%d",&sophut);
    thuebaothang=25000;
    if (sophut<=50){
        thanhtien=thuebaothang+sophut*600;
    } else if (sophut<=150){
        thanhtien=thuebaothang+50*600+(sophut-50)*400;
    } else if (sophut<=200){
        thanhtien=thuebaothang+50*600+100*400+(sophut-150)*200;
    } else {
        thanhtien=thuebaothang+50*600+100*400+50*200+(sophut-200)*100;
    }
        printf("tien dien thoai la: %d",thanhtien);
    return 0;
}