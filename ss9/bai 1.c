#include <stdio.h>
void menu(){
    printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
}
int a[5];
void nhapso1(){
    for(int i=0; i<5; i++){
        printf("moi nhap phan tu thu a[%d]:  ",i);
        scanf("%d",&a[i]);
    }
}
void nhapso2(){
    printf("cac so da nhap la:\n");
    for (int i=0; i<5; i++){
        printf("%d   \n",a[i]);
        
    }
}
void nhapso3(){
    int sum=0;
    for( int i=0; i<5; i++){
        if(a[i]%2==0){
            printf("cac so chan la: %d\n",a[i]);
            sum+=a[i];
        }
    }printf("tong la: %d\n",sum);
}
int main(){
    int nhapso;
    do {
        menu();
        printf("nhap so ban muon chon:");
        scanf("%d",&nhapso);
        switch (nhapso) {
            case 1 :
                nhapso1();
                break;
            case 2:
                nhapso2();
                break;
            case 3:
                nhapso3();
                break;
            default:
                if (nhapso>3||nhapso<0){
                    printf("lua chon khong hop le moi chon lai \n");
                }
        }
    } while (nhapso!=0);
    return 0;
}
