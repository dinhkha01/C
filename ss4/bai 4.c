#include <stdio.h>
int main () {
    int t,n;
    printf("nhap vao nam va thang:   ");
    scanf ("%d%d",&n,&t);
    switch (t) {
    case 1 : case 3: case 5: case 7: case 8: case 10: case 12:
        printf ( " thang %d la thang co 31 ngay\n",t);
        case 4: case 6: case 9: case 11:
            printf("thang %d la thang co 30 ngay\n",t);
        case 2:
            if ((n % 4 == 0) && (n % 100!= 0) || (n%400 == 0))
                printf("%d la mot nam nhuan", n);
            else
                printf("%d khong phai la nam nhuan", n);

    }


    return 0;

}