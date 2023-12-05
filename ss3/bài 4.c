#include <stdio.h>
int main (){
    int n1,n2,n3,min, max;
    printf("nhap so thu nhat: ");
    scanf ("%d",&n1);
    printf("nhap so thu hai: ");
    scanf ("%d",&n2);
    printf("nhap so thu ba: ");
    scanf ("%d",&n3);
    max=n1;
    min=n1;
    if (max<n2){max=n2;}
    if (max<n3){max=n3;}
    if(min>n2){min=n2;}
    if(min>n3){min=n3;}
printf ("so lon nhat la : %d so nho nhat la: %d ",max,min);
    return 0;
}